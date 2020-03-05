// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// tree_search_rcpp
Rcpp::List tree_search_rcpp(const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& Y, int depth, int split_step);
RcppExport SEXP _policytree_tree_search_rcpp(SEXP XSEXP, SEXP YSEXP, SEXP depthSEXP, SEXP split_stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type split_step(split_stepSEXP);
    rcpp_result_gen = Rcpp::wrap(tree_search_rcpp(X, Y, depth, split_step));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_policytree_tree_search_rcpp", (DL_FUNC) &_policytree_tree_search_rcpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_policytree(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
