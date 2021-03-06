#' Replication data for Lin 2013
#'
#' A dataset containing the data to replicate:
#' Lin, Winston. 2013. "Agnostic notes on regression adjustments to experimental
#' data: Reexamining Freedman's critique." The Annals of Applied Statistics.
#' Stat. 7(1): 295-318. doi:10.1214/12-AOAS583.
#' https://projecteuclid.org/euclid.aoas/1365527200.
#'
#' This data was originally taken from the following paper, subset to men who
#' showed up to college, were in one of the arms with the support condition,
#' and had GPA data for their first year in college.
#'
#' Angrist, Joshua, Daniel Lang, and Philip Oreopoulos. 2009. "Incentives and
#' Services for College Achievement: Evidence from a Randomized Trial." American
#' Economic Journal: Applied Economics 1(1): 136-63.
#' https://www.aeaweb.org/articles?id=10.1257/app.1.1.136
#'
#' @format A data frame with educational treatments and outcomes:
#' \describe{
#'   \item{gpa0}{high school GPA}
#'   \item{sfsp}{financial incentives and support treatment}
#'   \item{ssp}{support only treatment}
#'   \item{GPA_year1}{college GPA year 1}
#'   \item{GPA_year2}{college GPA year 2}
#' }
#' @source \url{https://www.aeaweb.org/articles?id=10.1257/app.1.1.136}
"alo_star_men"
