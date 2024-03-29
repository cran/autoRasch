% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/itemfit.R
\name{fitStats}
\alias{fitStats}
\alias{summary.fit}
\alias{itemfit}
\alias{personfit}
\alias{plot_fitStats}
\title{Fit statistics}
\usage{
fitStats(obj, isAlpha = TRUE)

\method{summary}{fit}(object, ...)

itemfit(objFit)

personfit(objFit)

plot_fitStats(objFit, toPlot = c("alpha", "infit"), useName = FALSE, ...)
}
\arguments{
\item{obj}{The object of class \code{'pcm'} or \code{'pcmdif'}.}

\item{isAlpha}{Boolean value that indicates whether the discrimination parameters is needed to be estimated or not.
The discrimination parameters are estimated using the corresponding models (GPCM or GPCM-DIF).}

\item{object}{The object of class \code{'fit'}.}

\item{...}{Further arguments to be passed.}

\item{objFit}{The object of class \code{'fit'}.}

\item{toPlot}{An array with length two \code{c(x,y)}, to choose what to plot. There are five options to plot, which are alpha, outfit, infit, outfitz, and infitz}

\item{useName}{A logical statement whether the name of the variable are going to be used in the plot instead of the variable order.}
}
\value{
\strong{\code{fitStats()} will return a \code{\link[base:list]{list}} which contains:}
\item{alpha}{   A vector of estimated discrimination parameters for each items.}
\emph{i.fit}{   Item fit statistics.}
\itemize{
\item{i.outfitMSQ}{   A vector of Outfit mean square values for each items.}
\item{i.infitMSQ}{   A vector of Infit mean square values for each items.}
\item{i.outfitZ}{   A vector of OutfitZ values for each items.}
\item{i.infitZ}{   A vector of InfitZ values for each items.}
}
\emph{p.fit}{   Person fit statistics.}
\itemize{
\item{p.outfitMSQ}{   A vector of Outfit mean square values for each persons.}
\item{p.infitMSQ}{   A vector of Infit mean square values for each persons.}
\item{p.outfitZ}{   A vector of OutfitZ values for each persons.}
\item{p.infitZ}{   A vector of InfitZ values for each persons.}
}
\emph{traceMat}{   Some computed matrices in the process. Only if \code{isTraced = TRUE}}
\itemize{
\item{emat}{   The expected values matrix.}
\item{vmat}{   The variance matrix.}
\item{cmat}{   The curtosis matrix.}
\item{std.res}{   The standardized residual.}
}
}
\description{
The goodness-of-fit statistics of Rasch analysis for items and persons. It consists of Outfit (Unweighted) Mean Square,
Infit (Weighted) Mean Square, Outfit ZSTD (Standardized Unweighted Mean Square), and Outfit ZSTD (Standardized Weighted Mean Square)
}
