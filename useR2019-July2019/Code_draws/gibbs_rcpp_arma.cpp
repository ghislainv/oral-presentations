// ==============================================================================
// author          :Ghislain Vieilledent, Jeanne Clément
// email           :ghislain.vieilledent@cirad.fr, jeanne.clement16@laposte.net
// web             :https://ecology.ghislainv.fr
// license         :GPLv3
// ==============================================================================

#include <RcppArmadillo.h>

// [[Rcpp::depends(RcppArmadillo)]]

using namespace arma;
using namespace std;

// [[Rcpp::export]]
arma::mat gibbs_rcpp_arma(int N, int thin) {
	
	arma::mat mat; mat.zeros(N, 2);
	double x = 0, y = 0;
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < thin; j++) {
			x = R::rgamma(3, 1 / (y * y + 4)); // Gamma(shape, scale) with R::
			y = R::rnorm((1 / (x + 1)), 1 / sqrt(2 * (x + 1)));
		}
		mat(i, 0) = x;
		mat(i, 1) = y;
	}
	
	return(mat);
}

# /*** R
# mat_res <- gibbs_rcpp_arma(100, 10)
# hist(mat_res[,1])
# hist(mat_res[,2])
# */
