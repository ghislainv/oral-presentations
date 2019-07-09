#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericMatrix gibbs_rcpp(int N, int thin) {
	NumericMatrix mat(N, 2);
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
