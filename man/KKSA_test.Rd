% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/KKSA_test.R
\name{KKSA_test}
\alias{KKSA_test}
\title{Kharrati-Kopaei and Sadooghi-Alvandi's (2007) test for interaction}
\usage{
KKSA_test(
  x,
  nsim = 10000,
  alpha = 0.05,
  report = TRUE,
  plot = FALSE,
  vecolor = c("blue", "red"),
  linetype = c(1, 2),
  Elapsed_time = TRUE
)
}
\arguments{
\item{x}{numeric matrix, \eqn{a \times b} data matrix where the number of row and column is corresponding to the number of factor levels.}

\item{nsim}{a numeric value, the number of Monte Carlo samples for computing an exact Monte Carlo p-value. The default value is 10000.}

\item{alpha}{a numeric value, the level of the test. The default value is 0.05.}

\item{report}{logical: if \code{TRUE} the result of the test is reported at the \code{alpha} level.}

\item{plot}{logical: if \code{TRUE} an interaction plot will be plotted.}

\item{vecolor}{character vector with length two, for visualizing the colors of lines in interaction plot. The default colors are blue and red.}

\item{linetype}{numeric vector with length two, for visualizing the line types in interaction plot. The default line types are 1 and 2.}

\item{Elapsed_time}{logical: if \code{TRUE} the progress will be printed in the console.}
}
\value{
An object of the class \code{ITtest}, which is a list inducing following components:
\item{pvalue_exact}{The calculated exact Monte Carlo p-value.}
\item{pvalue_appro}{The Bonferroni-adjusted p-value is calculated.}
\item{statistic}{The value of the test statistic.}
\item{Nsim}{The number of Monte Carlo samples that are used to estimate p-value.}
\item{data_name}{The name of the input dataset.}
\item{test}{The name of the test.}
\item{Level}{The level of test.}
\item{Result}{The result of the test at the alpha level with some descriptions on the type of significant interaction.}
}
\description{
This function calculates Kharrati-Kopaei and Sadooghi-Alvandi's test statistic and corresponding p-value for testing interaction.
}
\details{
Suppose that \eqn{a \ge b} and \eqn{b \ge 4}. Consider the \eqn{l}-th division of the data table into two sub-tables,
 obtained by putting \eqn{a_1} (\eqn{2 \le a_1 \le a-2}) rows in the first sub-table and the remaining \eqn{a_2} rows in the second sub-table (\eqn{a_1+a_2=a}).
 Let RSS1 and RSS2 denote the residual sum of squares for these two sub-tables, respectively. For a particular division \eqn{l}, let \eqn{F_l=max\{F_l,1/F_l\}}
 where \eqn{F_l=(a_2-1)RSS1/((a_1-1)RSS2)} and let \eqn{P_l} denote the corresponding p-value.
 Kharrati-Kopaei and Sadooghi-Alvandi (2007) proposed their test statistic as the minimum value of \eqn{P_l} over \eqn{l=1,…,2^{(a-1)}-a-1} all possible divisions of the table.
 If \code{plot} is \code{TRUE} an interaction plot will be plotted by displaying levels of column factor on the horizontal axis,
 levels of row factor using lines that are visually distinguished by line type and color, and the
 observed values on the vertical axis. Color and line type are used to display which levels of row factor are assigned to which
 sub-tables based on the minimum p-values among all possible configurations. Note
 that the grouping colors and line types appear whether or not the KKSA.test detects
 a significant non-additivity. The default colors are blue and red, and the default line types are one and two for the two sub-tables. They can be customized by supplying arguments called \code{vecolor} and \code{linetype}.
 Note that this method of testing requires that the data matrix has more than three
 rows. This test procedure is powerful for detecting interaction when the magnitude of interaction effects is heteroscedastic across the sub-tables of observations.
}
\examples{
data(IDCP)
KKSA_test(IDCP, nsim = 1000, Elapsed_time = FALSE)

}
\references{
Kharrati-Kopaei, M., Sadooghi-Alvandi, S.M. (2007). A New Method for
 Testing Interaction in Unreplicated Two-Way Analysis of Variance. Communications
 in Statistics-Theory and Methods 36:2787–2803.

 Shenavari, Z., Kharrati-Kopaei, M. (2018). A Method for Testing Additivity in
 Unreplicated Two-Way Layouts Based on Combining Multiple Interaction Tests. International Statistical Review
 86(3): 469-487.
}
