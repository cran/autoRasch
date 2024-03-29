% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/data.R
\docType{data}
\name{short_poly_data}
\alias{short_poly_data}
\title{A Shorter Inhomogenous Polytomous Dataset}
\format{
An object of class \code{data.frame} with 151 rows and 9 columns.
}
\usage{
data(short_poly_data)
}
\description{
The artificial dataset of a polytomous responses (three categories) which
contains three subsets with different discrimination values.
To reproduce this dataset: \cr
\code{short_poly_data <- generate_data(alpha = c(0.02,0.5,2), nitem = 3, ndim = 3,ncat = 5, theta = c(-6,6), beta = c(-4,4), ntheta = 151)}
\cr\cr will lead to similar but not the same dataset, due to the randomization.
}
\keyword{datasets}
