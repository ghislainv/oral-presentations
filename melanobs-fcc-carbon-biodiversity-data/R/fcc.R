library(readr)
library(dplyr)
library(here)

dir <- "melanobs-fcc-carbon-biodiversity-data"

df <- readr::read_delim(
  here(dir, "tables", "gfw_2023_statistics_summary.csv"),
  delim="\t")

ctry_list <- c("Papua New Guinea", "Solomon Islands", "Vanuatu",
               "Fiji", "New Caledonia")

df2 <- df |>
  select(Country, "2010":"2019") |>
  dplyr::filter(Country %in% ctry_list) |>
  rowwise() |>
  mutate(mean = mean(c_across(c("2010":"2019")), na.rm=TRUE)) |>
  select(Country, "mean")

print(df2)

# End of file
