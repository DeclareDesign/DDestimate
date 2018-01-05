
<!-- README.md is generated from README.Rmd. Please edit that file -->
estimatr: Fast estimators for social scientists
===============================================

[![Travis-CI Build Status](https://travis-ci.org/DeclareDesign/estimatr.svg?branch=master)](https://travis-ci.org/DeclareDesign/estimatr) [![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/DeclareDesign/estimatr?branch=master&svg=true)](https://ci.appveyor.com/project/DeclareDesign/estimatr) [![Coverage Status](https://coveralls.io/repos/github/DeclareDesign/estimatr/badge.svg?branch=master)](https://coveralls.io/github/DeclareDesign/estimatr?branch=master)

Technical papers and textbooks demand complex estimation strategies that are often difficult to implement, even for scientists who are expert coders. The result is slow code copied and pasted from the internet, where the result is taken on faith.

**estimatr** provides a small set of commonly-used estimators (methods for estimating quantities of interest like treatment effects or regression parameters), written in `C++` for speed, and implemented in `R` with simple, accessible syntax. We include two functions that implement means estimators, [`difference_in_means()`](reference/difference_in_means.html) and [`horvitz_thompson()`](reference/horvitz_thompson.html). In addition, we include two functions for linear regression estimators, [`lm_robust()`](reference/lm_robust.html) and [`lm_lin()`](reference/lm_lin.html). In each case, scientists can choose an estimator to reflect cluster-randomized, block-randomized, and block-and-cluster-randomized designs.

Fast estimators also enable fast simulation of research designs to learn about their properties (see [DeclareDesign](http://declaredesign.org)).

### Installing estimatr

If you would like to use the current development release of **estimatr**, please ensure that you are running version 3.3 or later of R and run the following code:

``` r
install.packages("estimatr", dependencies = TRUE,
  repos = c("http://R.declaredesign.org", "https://cloud.r-project.org"))
```

### Easy to use

Once the package is installed, getting appropriate estimates and standard errors is now both fast and easy.

``` r
library(estimatr)

# robust standard errors
lm_robust(y ~ z, data = sample_dat)

# cluster robust standard errors
lm_robust(y ~ z, data = sample_dat, clusters = my_cluster_var)

# blocked designs
difference_in_means(y ~ z, data = sample_dat, blocks = my_block_var)
```

The [Getting Started Guide](http://estimatr.declaredesign.org/articles/estimatr-vignette.html) describes each estimator provided by **estimatr** and how it can be used in your analysis.

### Fast to use

Getting estimates and robust standard errors is also faster than it used to be. Compare our package to using `lm()` and the `sandwich` package to get HC2 standard errors.

``` r
# estimatr
lm_robust(y ~ x1 + x2 + x3 + x4, data = dat)

# usual specification (lm + sandwich)
lm_out <- lm(y ~ x1 + x2 + x3 + x4, data = dat)
lmtest::coeftest(lm_out, vcov = sandwich::vcovHC(lm_out, type = 'HC2'))
```

![](vignettes/lm_speed.png)

![](vignettes/lm_speed_covars.png)

------------------------------------------------------------------------

This project is generously supported by a grant from the [Laura and John Arnold Foundation](http://www.arnoldfoundation.org) and seed funding from [Evidence in Governance and Politics (EGAP)](http://egap.org).
