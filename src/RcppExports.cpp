// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ll_cpp
double ll_cpp(arma::vec theta, arma::vec gamma, arma::mat delta, arma::mat groups, arma::mat beta, arma::vec m_cat, arma::mat X, bool gamma_penalized, bool delta_penalized, bool theta_penalized, double lambda_in, double lambda_out, double lambda_delta, double lambda_theta, double eps, int mode);
RcppExport SEXP _autoRasch_ll_cpp(SEXP thetaSEXP, SEXP gammaSEXP, SEXP deltaSEXP, SEXP groupsSEXP, SEXP betaSEXP, SEXP m_catSEXP, SEXP XSEXP, SEXP gamma_penalizedSEXP, SEXP delta_penalizedSEXP, SEXP theta_penalizedSEXP, SEXP lambda_inSEXP, SEXP lambda_outSEXP, SEXP lambda_deltaSEXP, SEXP lambda_thetaSEXP, SEXP epsSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type m_cat(m_catSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< bool >::type gamma_penalized(gamma_penalizedSEXP);
    Rcpp::traits::input_parameter< bool >::type delta_penalized(delta_penalizedSEXP);
    Rcpp::traits::input_parameter< bool >::type theta_penalized(theta_penalizedSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_in(lambda_inSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_out(lambda_outSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_delta(lambda_deltaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_theta(lambda_thetaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(ll_cpp(theta, gamma, delta, groups, beta, m_cat, X, gamma_penalized, delta_penalized, theta_penalized, lambda_in, lambda_out, lambda_delta, lambda_theta, eps, mode));
    return rcpp_result_gen;
END_RCPP
}
// grad_cpp
Rcpp::List grad_cpp(arma::vec theta, arma::vec gamma, arma::mat delta, arma::mat groups, arma::mat beta, arma::vec m_cat, arma::mat X, bool gamma_penalized, bool delta_penalized, bool theta_penalized, double lambda_in, double lambda_out, double lambda_delta, double lambda_theta, double eps, int mode);
RcppExport SEXP _autoRasch_grad_cpp(SEXP thetaSEXP, SEXP gammaSEXP, SEXP deltaSEXP, SEXP groupsSEXP, SEXP betaSEXP, SEXP m_catSEXP, SEXP XSEXP, SEXP gamma_penalizedSEXP, SEXP delta_penalizedSEXP, SEXP theta_penalizedSEXP, SEXP lambda_inSEXP, SEXP lambda_outSEXP, SEXP lambda_deltaSEXP, SEXP lambda_thetaSEXP, SEXP epsSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type m_cat(m_catSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< bool >::type gamma_penalized(gamma_penalizedSEXP);
    Rcpp::traits::input_parameter< bool >::type delta_penalized(delta_penalizedSEXP);
    Rcpp::traits::input_parameter< bool >::type theta_penalized(theta_penalizedSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_in(lambda_inSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_out(lambda_outSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_delta(lambda_deltaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_theta(lambda_thetaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(grad_cpp(theta, gamma, delta, groups, beta, m_cat, X, gamma_penalized, delta_penalized, theta_penalized, lambda_in, lambda_out, lambda_delta, lambda_theta, eps, mode));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_autoRasch_ll_cpp", (DL_FUNC) &_autoRasch_ll_cpp, 16},
    {"_autoRasch_grad_cpp", (DL_FUNC) &_autoRasch_grad_cpp, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_autoRasch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
