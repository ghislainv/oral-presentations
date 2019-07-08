#include <Rcpp.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

using namespace Rcpp;

// [[Rcpp::depends(RcppGSL)]]

// [[Rcpp::export]]
Rcpp::NumericVector my_rnorm(int nsamp, double mu, double sigma) {
	gsl_rng *s = gsl_rng_alloc(gsl_rng_mt19937);
	Rcpp::NumericVector beta(nsamp);
	for (int i = 0; i < nsamp; i++) {
		beta[i] = mu + gsl_ran_gaussian(s, sigma);
	}
	return beta;
}

/*** R
beta <- my_rnorm(50, 5, 1)
hist(beta)
*/
