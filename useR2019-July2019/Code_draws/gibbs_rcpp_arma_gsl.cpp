// ==============================================================================
// author          :Ghislain Vieilledent, Jeanne Clément
// email           :ghislain.vieilledent@cirad.fr, jeanne.clement16@laposte.net
// web             :https://ecology.ghislainv.fr
// license         :GPLv3
// ==============================================================================

#include <RcppArmadillo.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::depends(RcppGSL)]]

using namespace arma;
using namespace std;

// [[Rcpp::export]]
arma::mat gibbs_rcpp_arma_gsl(int N, int thin) {
	
	// Initialize random number generator //
	gsl_rng *s = gsl_rng_alloc(gsl_rng_mt19937);

	arma::mat mat; mat.zeros(N, 2);
	double x = 0, y = 0;
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < thin; j++) {
			x = gsl_ran_gamma(s, 3, 1 / (y * y + 4)); // Gamma(shape, scale) with GSL
			y = (1 / (x + 1)) + gsl_ran_gaussian_ziggurat(s, 1 / sqrt(2 * (x + 1)));
		}
		mat(i, 0) = x;
		mat(i, 1) = y;
	}
	
	// Free memory
	gsl_rng_free(s);
	
	return(mat);
}

# /*** R
# mat_res <- gibbs_rcpp_arma_gsl(100, 10)
# hist(mat_res[,1])
# hist(mat_res[,2])
# */
