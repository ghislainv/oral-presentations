# Libraries
library(rbenchmark)

# Benchmark
Benchmark <- benchmark(
	"R" = {gibbs_r(100, 10)},
	"rcpp" = {gibbs_rcpp(100, 10)},
	"rcpp_arma_gsl" = {gibbs_rcpp_arma_gsl(100, 10)},
	replications=30,
	columns = c("test", "replications", "elapsed",
				"relative", "user.self", "sys.self")
)

Benchmark
