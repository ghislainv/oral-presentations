#!/usr/bin/Rscript

## ==============================================================================
## author          :Ghislain Vieilledent
## email           :ghislain.vieilledent@cirad.fr, ghislainv@gmail.com
## web             :https://ghislainv.github.io
## license         :CC-BY-SA 4.0
## ==============================================================================

## Libraries
library(knitr)
library(here)

## Set directory
setwd(here::here("JSDM-Metradica"))

## Compile
rmarkdown::render("JSDM-Metradica.Rmd")

## EOF
