// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// ht_covar_partial
double ht_covar_partial(const Eigen::VectorXd& y1, const Eigen::VectorXd& y0, const Eigen::MatrixXd& p10, const Eigen::VectorXd& p1, const Eigen::VectorXd& p0);
RcppExport SEXP _estimatr_ht_covar_partial(SEXP y1SEXP, SEXP y0SEXP, SEXP p10SEXP, SEXP p1SEXP, SEXP p0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type p10(p10SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type p0(p0SEXP);
    rcpp_result_gen = Rcpp::wrap(ht_covar_partial(y1, y0, p10, p1, p0));
    return rcpp_result_gen;
END_RCPP
}
// ht_var_partial
double ht_var_partial(const Eigen::VectorXd& y, const Eigen::MatrixXd& p);
RcppExport SEXP _estimatr_ht_var_partial(SEXP ySEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var_partial(y, p));
    return rcpp_result_gen;
END_RCPP
}
// demeanMat2
Eigen::ArrayXXd demeanMat2(const Eigen::MatrixXd& what, const Rcpp::IntegerMatrix& fes, const Rcpp::NumericVector& weights, const int& start_col, const double& eps);
RcppExport SEXP _estimatr_demeanMat2(SEXP whatSEXP, SEXP fesSEXP, SEXP weightsSEXP, SEXP start_colSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type what(whatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type fes(fesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const int& >::type start_col(start_colSEXP);
    Rcpp::traits::input_parameter< const double& >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(demeanMat2(what, fes, weights, start_col, eps));
    return rcpp_result_gen;
END_RCPP
}
// AtA
Eigen::MatrixXd AtA(const Eigen::MatrixXd& A);
RcppExport SEXP _estimatr_AtA(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(AtA(A));
    return rcpp_result_gen;
END_RCPP
}
// Kr
Eigen::MatrixXd Kr(const Eigen::MatrixXd& A, const Eigen::MatrixXd& B);
RcppExport SEXP _estimatr_Kr(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(Kr(A, B));
    return rcpp_result_gen;
END_RCPP
}
// lm_solver
List lm_solver(const Eigen::Map<Eigen::MatrixXd>& X, const Eigen::Map<Eigen::MatrixXd>& y, const bool& try_cholesky);
RcppExport SEXP _estimatr_lm_solver(SEXP XSEXP, SEXP ySEXP, SEXP try_choleskySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const bool& >::type try_cholesky(try_choleskySEXP);
    rcpp_result_gen = Rcpp::wrap(lm_solver(X, y, try_cholesky));
    return rcpp_result_gen;
END_RCPP
}
// lm_variance
List lm_variance(Eigen::Map<Eigen::MatrixXd>& X, const Rcpp::Nullable<Rcpp::NumericMatrix>& Xunweighted, const Eigen::Map<Eigen::MatrixXd>& XtX_inv, const Eigen::Map<Eigen::MatrixXd>& ei, const double weight_mean, const Rcpp::Nullable<Rcpp::IntegerVector>& cluster, const int& J, const bool& ci, const String se_type, const std::vector<bool>& which_covs, const int& fe_rank);
RcppExport SEXP _estimatr_lm_variance(SEXP XSEXP, SEXP XunweightedSEXP, SEXP XtX_invSEXP, SEXP eiSEXP, SEXP weight_meanSEXP, SEXP clusterSEXP, SEXP JSEXP, SEXP ciSEXP, SEXP se_typeSEXP, SEXP which_covsSEXP, SEXP fe_rankSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type Xunweighted(XunweightedSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type XtX_inv(XtX_invSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type ei(eiSEXP);
    Rcpp::traits::input_parameter< const double >::type weight_mean(weight_meanSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type cluster(clusterSEXP);
    Rcpp::traits::input_parameter< const int& >::type J(JSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ci(ciSEXP);
    Rcpp::traits::input_parameter< const String >::type se_type(se_typeSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type which_covs(which_covsSEXP);
    Rcpp::traits::input_parameter< const int& >::type fe_rank(fe_rankSEXP);
    rcpp_result_gen = Rcpp::wrap(lm_variance(X, Xunweighted, XtX_inv, ei, weight_mean, cluster, J, ci, se_type, which_covs, fe_rank));
    return rcpp_result_gen;
END_RCPP
}
// naomitwhy
DataFrame naomitwhy(DataFrame df, Function recursive_subset);
RcppExport SEXP _estimatr_naomitwhy(SEXP dfSEXP, SEXP recursive_subsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< Function >::type recursive_subset(recursive_subsetSEXP);
    rcpp_result_gen = Rcpp::wrap(naomitwhy(df, recursive_subset));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_estimatr_ht_covar_partial", (DL_FUNC) &_estimatr_ht_covar_partial, 5},
    {"_estimatr_ht_var_partial", (DL_FUNC) &_estimatr_ht_var_partial, 2},
    {"_estimatr_demeanMat2", (DL_FUNC) &_estimatr_demeanMat2, 5},
    {"_estimatr_AtA", (DL_FUNC) &_estimatr_AtA, 1},
    {"_estimatr_Kr", (DL_FUNC) &_estimatr_Kr, 2},
    {"_estimatr_lm_solver", (DL_FUNC) &_estimatr_lm_solver, 3},
    {"_estimatr_lm_variance", (DL_FUNC) &_estimatr_lm_variance, 11},
    {"_estimatr_naomitwhy", (DL_FUNC) &_estimatr_naomitwhy, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_estimatr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
