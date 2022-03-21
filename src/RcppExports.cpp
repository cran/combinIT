// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Bfc
float Bfc(arma::mat x, int bl, int tr, int p);
RcppExport SEXP _combinIT_Bfc(SEXP xSEXP, SEXP blSEXP, SEXP trSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type bl(blSEXP);
    Rcpp::traits::input_parameter< int >::type tr(trSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(Bfc(x, bl, tr, p));
    return rcpp_result_gen;
END_RCPP
}
// Bfsim
arma::vec Bfsim(int nsim, int bl, int tr, int p);
RcppExport SEXP _combinIT_Bfsim(SEXP nsimSEXP, SEXP blSEXP, SEXP trSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< int >::type bl(blSEXP);
    Rcpp::traits::input_parameter< int >::type tr(trSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(Bfsim(nsim, bl, tr, p));
    return rcpp_result_gen;
END_RCPP
}
// picf
double picf(arma::vec y, arma::mat kp, float c0);
RcppExport SEXP _combinIT_picf(SEXP ySEXP, SEXP kpSEXP, SEXP c0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kp(kpSEXP);
    Rcpp::traits::input_parameter< float >::type c0(c0SEXP);
    rcpp_result_gen = Rcpp::wrap(picf(y, kp, c0));
    return rcpp_result_gen;
END_RCPP
}
// PICfsim
arma::vec PICfsim(int nsim, arma::mat kp, float c0, int n);
RcppExport SEXP _combinIT_PICfsim(SEXP nsimSEXP, SEXP kpSEXP, SEXP c0SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kp(kpSEXP);
    Rcpp::traits::input_parameter< float >::type c0(c0SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(PICfsim(nsim, kp, c0, n));
    return rcpp_result_gen;
END_RCPP
}
// C0
double C0(arma::mat kp, int n, int nc0);
RcppExport SEXP _combinIT_C0(SEXP kpSEXP, SEXP nSEXP, SEXP nc0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type kp(kpSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type nc0(nc0SEXP);
    rcpp_result_gen = Rcpp::wrap(C0(kp, n, nc0));
    return rcpp_result_gen;
END_RCPP
}
// piephoC
double piephoC(arma::mat x, int bl, int tr);
RcppExport SEXP _combinIT_piephoC(SEXP xSEXP, SEXP blSEXP, SEXP trSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type bl(blSEXP);
    Rcpp::traits::input_parameter< int >::type tr(trSEXP);
    rcpp_result_gen = Rcpp::wrap(piephoC(x, bl, tr));
    return rcpp_result_gen;
END_RCPP
}
// Piephosim
arma::vec Piephosim(int nsim, int bl, int tr);
RcppExport SEXP _combinIT_Piephosim(SEXP nsimSEXP, SEXP blSEXP, SEXP trSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< int >::type bl(blSEXP);
    Rcpp::traits::input_parameter< int >::type tr(trSEXP);
    rcpp_result_gen = Rcpp::wrap(Piephosim(nsim, bl, tr));
    return rcpp_result_gen;
END_RCPP
}
// M_f
double M_f(arma::mat x);
RcppExport SEXP _combinIT_M_f(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(M_f(x));
    return rcpp_result_gen;
END_RCPP
}
// kk_f
double kk_f(NumericMatrix x);
RcppExport SEXP _combinIT_kk_f(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(kk_f(x));
    return rcpp_result_gen;
END_RCPP
}
// hh_f
double hh_f(NumericMatrix x);
RcppExport SEXP _combinIT_hh_f(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(hh_f(x));
    return rcpp_result_gen;
END_RCPP
}
// kh_f
List kh_f(NumericMatrix x);
RcppExport SEXP _combinIT_kh_f(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(kh_f(x));
    return rcpp_result_gen;
END_RCPP
}
// bmp_f
List bmp_f(arma::mat x);
RcppExport SEXP _combinIT_bmp_f(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bmp_f(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_combinIT_Bfc", (DL_FUNC) &_combinIT_Bfc, 4},
    {"_combinIT_Bfsim", (DL_FUNC) &_combinIT_Bfsim, 4},
    {"_combinIT_picf", (DL_FUNC) &_combinIT_picf, 3},
    {"_combinIT_PICfsim", (DL_FUNC) &_combinIT_PICfsim, 4},
    {"_combinIT_C0", (DL_FUNC) &_combinIT_C0, 3},
    {"_combinIT_piephoC", (DL_FUNC) &_combinIT_piephoC, 3},
    {"_combinIT_Piephosim", (DL_FUNC) &_combinIT_Piephosim, 3},
    {"_combinIT_M_f", (DL_FUNC) &_combinIT_M_f, 1},
    {"_combinIT_kk_f", (DL_FUNC) &_combinIT_kk_f, 1},
    {"_combinIT_hh_f", (DL_FUNC) &_combinIT_hh_f, 1},
    {"_combinIT_kh_f", (DL_FUNC) &_combinIT_kh_f, 1},
    {"_combinIT_bmp_f", (DL_FUNC) &_combinIT_bmp_f, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_combinIT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}