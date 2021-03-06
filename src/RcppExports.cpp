// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// internal_combn_C
IntegerMatrix internal_combn_C(IntegerVector x);
RcppExport SEXP _ojUtils_internal_combn_C(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(internal_combn_C(x));
    return rcpp_result_gen;
END_RCPP
}
// ifelseCNum
NumericVector ifelseCNum(LogicalVector test, NumericVector yes, NumericVector no);
RcppExport SEXP _ojUtils_ifelseCNum(SEXP testSEXP, SEXP yesSEXP, SEXP noSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type test(testSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yes(yesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type no(noSEXP);
    rcpp_result_gen = Rcpp::wrap(ifelseCNum(test, yes, no));
    return rcpp_result_gen;
END_RCPP
}
// ifelseCLogic
LogicalVector ifelseCLogic(LogicalVector test, LogicalVector yes, LogicalVector no);
RcppExport SEXP _ojUtils_ifelseCLogic(SEXP testSEXP, SEXP yesSEXP, SEXP noSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type test(testSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type yes(yesSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type no(noSEXP);
    rcpp_result_gen = Rcpp::wrap(ifelseCLogic(test, yes, no));
    return rcpp_result_gen;
END_RCPP
}
// ifelseCInt
IntegerVector ifelseCInt(LogicalVector test, IntegerVector yes, IntegerVector no);
RcppExport SEXP _ojUtils_ifelseCInt(SEXP testSEXP, SEXP yesSEXP, SEXP noSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type test(testSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type yes(yesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no(noSEXP);
    rcpp_result_gen = Rcpp::wrap(ifelseCInt(test, yes, no));
    return rcpp_result_gen;
END_RCPP
}
// ifelseCChar
CharacterVector ifelseCChar(LogicalVector test, CharacterVector yes, CharacterVector no);
RcppExport SEXP _ojUtils_ifelseCChar(SEXP testSEXP, SEXP yesSEXP, SEXP noSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type test(testSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type yes(yesSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type no(noSEXP);
    rcpp_result_gen = Rcpp::wrap(ifelseCChar(test, yes, no));
    return rcpp_result_gen;
END_RCPP
}
// seqC
NumericVector seqC(double x, double y, double by);
RcppExport SEXP _ojUtils_seqC(SEXP xSEXP, SEXP ySEXP, SEXP bySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type by(bySEXP);
    rcpp_result_gen = Rcpp::wrap(seqC(x, y, by));
    return rcpp_result_gen;
END_RCPP
}
// triang2cf_C
NumericVector triang2cf_C(NumericMatrix triang);
RcppExport SEXP _ojUtils_triang2cf_C(SEXP triangSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type triang(triangSEXP);
    rcpp_result_gen = Rcpp::wrap(triang2cf_C(triang));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ojUtils_internal_combn_C", (DL_FUNC) &_ojUtils_internal_combn_C, 1},
    {"_ojUtils_ifelseCNum", (DL_FUNC) &_ojUtils_ifelseCNum, 3},
    {"_ojUtils_ifelseCLogic", (DL_FUNC) &_ojUtils_ifelseCLogic, 3},
    {"_ojUtils_ifelseCInt", (DL_FUNC) &_ojUtils_ifelseCInt, 3},
    {"_ojUtils_ifelseCChar", (DL_FUNC) &_ojUtils_ifelseCChar, 3},
    {"_ojUtils_seqC", (DL_FUNC) &_ojUtils_seqC, 3},
    {"_ojUtils_triang2cf_C", (DL_FUNC) &_ojUtils_triang2cf_C, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_ojUtils(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
