# http://adv-r.had.co.nz/Rcpp.html

gibbs_r <- function(N, thin) {
	mat <- matrix(nrow = N, ncol = 2)
	x <- y <- 0
	
	for (i in 1:N) {
		for (j in 1:thin) {
			x <- rgamma(1, 3, y * y + 4) # Gamma(shape, rate) with R
			y <- rnorm(1, 1 / (x + 1), 1 / sqrt(2 * (x + 1)))
		}
		mat[i, ] <- c(x, y)
	}
	mat
}

# mat_res <- gibbs_r(100, 10)
# hist(mat_res[,1])
# hist(mat_res[,2])
