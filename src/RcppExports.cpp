// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_Py_Initialize
void rcpp_Py_Initialize();
RcppExport SEXP SnakeCharmR_rcpp_Py_Initialize() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_Py_Initialize();
    return R_NilValue;
END_RCPP
}
// rcpp_Py_Finalize
void rcpp_Py_Finalize();
RcppExport SEXP SnakeCharmR_rcpp_Py_Finalize() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_Py_Finalize();
    return R_NilValue;
END_RCPP
}
// rcpp_Py_run_code
int rcpp_Py_run_code(String code);
RcppExport SEXP SnakeCharmR_rcpp_Py_run_code(SEXP codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type code(codeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_Py_run_code(code));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_Py_get_var
String rcpp_Py_get_var(String varname);
RcppExport SEXP SnakeCharmR_rcpp_Py_get_var(SEXP varnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type varname(varnameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_Py_get_var(varname));
    return rcpp_result_gen;
END_RCPP
}
