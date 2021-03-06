% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sudoku-solver.R
\name{solve_sudoku}
\alias{solve_sudoku}
\title{Sudoko solver}
\usage{
solve_sudoku(s, ...)
}
\arguments{
\item{s}{an unsolved sudoku, in matrix form, with NA values for empty cells.}

\item{...}{additional argumenets.}
}
\description{
This function solves sudoku puzzles.
}
\examples{
print_sudoku(sudoku)
solved_sudoku <- solve_sudoku(sudoku)
print_sudoku(solved_sudoku)
}
