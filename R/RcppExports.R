# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

ll_cpp <- function(theta, gamma, delta, groups, beta, m_cat, X, gamma_penalized, delta_penalized, theta_penalized, lambda_in, lambda_out, lambda_delta, lambda_theta, eps, mode) {
    .Call(`_autoRasch_ll_cpp`, theta, gamma, delta, groups, beta, m_cat, X, gamma_penalized, delta_penalized, theta_penalized, lambda_in, lambda_out, lambda_delta, lambda_theta, eps, mode)
}

grad_cpp <- function(theta, gamma, delta, groups, beta, m_cat, X, gamma_penalized, delta_penalized, theta_penalized, lambda_in, lambda_out, lambda_delta, lambda_theta, eps, mode) {
    .Call(`_autoRasch_grad_cpp`, theta, gamma, delta, groups, beta, m_cat, X, gamma_penalized, delta_penalized, theta_penalized, lambda_in, lambda_out, lambda_delta, lambda_theta, eps, mode)
}

