
<!-- README.md is generated from README.Rmd. Please edit that file -->
[![CRAN Status](https://www.r-pkg.org/badges/version/estimatr)](cran.r-project.org/package=estimatr) [![Travis-CI Build Status](https://travis-ci.org/DeclareDesign/estimatr.svg?branch=master)](https://travis-ci.org/DeclareDesign/estimatr) [![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/DeclareDesign/estimatr?branch=master&svg=true)](https://ci.appveyor.com/project/DeclareDesign/estimatr) [![Coverage Status](https://coveralls.io/repos/github/DeclareDesign/estimatr/badge.svg?branch=master)](https://coveralls.io/github/DeclareDesign/estimatr?branch=master)

**estimatr** is an `R` package providing a range of commonly-used linear estimators, designed for speed and for ease-of-use. Users can easily recover robust, cluster-robust, and other design appropriate estimates. We include two functions that implement means estimators, `difference_in_means()` and `horvitz_thompson()`, and three linear regression estimators, `lm_robust()`, `lm_lin()`, and `iv_robust()`. In each case, users can choose an estimator to reflect cluster-randomized, block-randomized, and block-and-cluster-randomized designs. The [Getting Started Guide](articles/getting-started.html) describes each estimator provided by **estimatr** and how it can be used in your analysis.

You can also see the multiple ways you can [get regression tables out of estimatr](articles/regression-tables.html) using commonly used `R` packages such as `texreg` and `stargazer`. Fast estimators also enable fast simulation of research designs to learn about their properties (see [DeclareDesign](declaredesign.org)).

Installing estimatr
-------------------

To install the latest stable release of **estimatr**, please ensure that you are running version 3.4 or later of R and run the following code:

``` r
install.packages("estimatr")
```

If you would like to use the latest development release of **estimatr**, please ensure that you are running version 3.4 or later of R and run the following code:

``` r
install.packages("estimatr", dependencies = TRUE,
                 repos = c("http://r.declaredesign.org", "https://cloud.r-project.org"))
```

Easy to use
-----------

Once the package is installed, getting appropriate estimates and standard errors is now both fast and easy.

``` r
library(estimatr)

# sample data from cluster-randomized experiment
library(fabricatr)
library(randomizr)
dat <- fabricate(
  N = 100,
  y = rnorm(N),
  clusterID = sample(letters[1:10], size = N, replace = TRUE),
  z = cluster_ra(clusterID)
)

# robust standard errors
res_rob <- lm_robust(y ~ z, data = dat)

# cluster robust standard errors
res_cl <- lm_robust(y ~ z, data = dat, clusters = clusterID)
summary(res_cl)
#> 
#> Call:
#> lm_robust(formula = y ~ z, data = dat, clusters = clusterID)
#> 
#> Standard error type:  CR2 
#> 
#> Coefficients:
#>             Estimate Std. Error Pr(>|t|) CI Lower CI Upper   DF
#> (Intercept)    0.269      0.164     0.20   -0.255    0.793 2.99
#> z             -0.422      0.250     0.14   -1.027    0.182 6.30
#> 
#> Multiple R-squared:  0.041 , Adjusted R-squared:  0.0312 
#> F-statistic: 2.86 on 1 and 9 DF,  p-value: 0.125

# matched-pair design learned from blocks argument
data(sleep)
res_dim <- difference_in_means(extra ~ group, data = sleep, blocks = ID)
```

The [Getting Started Guide](articles/getting-started.html) has more examples and uses, as do the reference pages. The [Mathematical Notes](articles/mathematical-notes.html) provide more information about what each estimator is doing under the hood.

Fast to use
-----------

Getting estimates and robust standard errors is also faster than it used to be. Compare our package to using `lm()` and the `sandwich` package to get HC2 standard errors. More speed comparisons are available [here](articles/benchmarking-estimatr.html). Furthermore, with many blocks (or fixed effects), users can use the `fixed_effects` argument of `lm_robust` with HC1 standard errors to greatly improve estimation speed. More on [fixed effects here](articles/absorbing-fixed-effects.html).

``` r
dat <- data.frame(X = matrix(2000*50, 2000), y = rnorm(2000))

library(microbenchmark)
library(lmtest)
library(sandwich)
mb <- microbenchmark(
  `estimatr` = lm_robust(y ~ ., data = dat)
  `lm + sandwich` = {lo <- lm(y ~ ., data = dat)}
)


lm_out <- lm(y ~ x1 + x2 + x3 + x4, data = dat)
coeftest(lm_out, vcov = vcovHC(lm_out, type = 'HC2'))
```

------------------------------------------------------------------------

This project is generously supported by a grant from the [Laura and John Arnold Foundation](arnoldfoundation.org) and seed funding from [Evidence in Governance and Politics (EGAP)](egap.org).
