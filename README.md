# estimatr: Fast estimators for social scientists

[![Travis-CI Build Status](https://travis-ci.org/DeclareDesign/estimatr.svg?branch=master)](https://travis-ci.org/DeclareDesign/estimatr)
[![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/DeclareDesign/estimatr?branch=master&svg=true)](https://ci.appveyor.com/project/DeclareDesign/estimatr)
[![Coverage Status](https://coveralls.io/repos/github/DeclareDesign/estimatr/badge.svg?branch=master)](https://coveralls.io/github/DeclareDesign/estimatr?branch=master)

*This software is in alpha release. Please contact the authors before using in experiments or published work.*

Technical papers and textbooks demand complex estimation strategies that are often difficult to implement, even for scientists who are expert coders. The result is slow code copied and pasted from the internet, where the result is taken on faith. `estimatr` provides a small set of commonly-used estimators written in `C++` for speed that are simple to use. Fast estimators also enable fast simulation of research designs to learn about their properties (see [DeclareDesign](http://declaredesign.org)). 

To install the latest development release of **estimatr**, please ensure that you are running version 3.3 or later of R and run the following code:

```
# Development branch
devtools::install_github("DeclareDesign/estimator")

# Last release
install.packages("estimatr", dependencies = TRUE,
  repos = c("http://R.declaredesign.org", "https://cloud.r-project.org"))
```

This project is generously supported by a grant from the [Laura and John Arnold Foundation](http://www.arnoldfoundation.org) and seed funding from [EGAP](http://egap.org).
 
(c) 2017 Graeme Blair, Jasper Cooper, Alexander Coppock, and Macartan Humphreys. All rights reserved.
