# Libraries
library(rbenchmark)
library(Rcpp)

# Source functions
source("gibbs_r.R")
sourceCpp("gibbs_rcpp.cpp")
sourceCpp("gibbs_rcpp_arma.cpp")
sourceCpp("gibbs_rcpp_arma_gsl.cpp")

# Benchmark
Benchmark <- benchmark(
	"R" = {gibbs_r(100, 10)},
	"rcpp" = {gibbs_rcpp(100, 10)},
	"rcpp_arma" = {gibbs_rcpp_arma(100, 10)},
	"rcpp_arma_gsl" = {gibbs_rcpp_arma_gsl(100, 10)},
	replications=30,
	columns = c("test", "replications", "elapsed",
				"relative", "user.self", "sys.self")
)

Benchmark
