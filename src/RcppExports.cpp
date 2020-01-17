// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getEmpties
std::vector<int> getEmpties(std::vector<int>& sudoku);
RcppExport SEXP _sudokuplyr_getEmpties(SEXP sudokuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int>& >::type sudoku(sudokuSEXP);
    rcpp_result_gen = Rcpp::wrap(getEmpties(sudoku));
    return rcpp_result_gen;
END_RCPP
}
// getLengths
std::vector<int> getLengths(std::vector< std::vector<int> >& candidates, std::vector<int>& empties);
RcppExport SEXP _sudokuplyr_getLengths(SEXP candidatesSEXP, SEXP emptiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::vector<int> >& >::type candidates(candidatesSEXP);
    Rcpp::traits::input_parameter< std::vector<int>& >::type empties(emptiesSEXP);
    rcpp_result_gen = Rcpp::wrap(getLengths(candidates, empties));
    return rcpp_result_gen;
END_RCPP
}
// sortEmpties
std::vector<int> sortEmpties(std::vector<int>& empties, std::vector<int>& lens);
RcppExport SEXP _sudokuplyr_sortEmpties(SEXP emptiesSEXP, SEXP lensSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int>& >::type empties(emptiesSEXP);
    Rcpp::traits::input_parameter< std::vector<int>& >::type lens(lensSEXP);
    rcpp_result_gen = Rcpp::wrap(sortEmpties(empties, lens));
    return rcpp_result_gen;
END_RCPP
}
// getCandidates
std::vector< std::vector<int> > getCandidates(std::vector<int>& sudoku, std::vector<int> nums);
RcppExport SEXP _sudokuplyr_getCandidates(SEXP sudokuSEXP, SEXP numsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int>& >::type sudoku(sudokuSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type nums(numsSEXP);
    rcpp_result_gen = Rcpp::wrap(getCandidates(sudoku, nums));
    return rcpp_result_gen;
END_RCPP
}
// solveBacktrack
bool solveBacktrack(std::vector<int>& sudoku, std::vector< std::vector<int> >& candidates, std::vector<int>& empties);
RcppExport SEXP _sudokuplyr_solveBacktrack(SEXP sudokuSEXP, SEXP candidatesSEXP, SEXP emptiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int>& >::type sudoku(sudokuSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector<int> >& >::type candidates(candidatesSEXP);
    Rcpp::traits::input_parameter< std::vector<int>& >::type empties(emptiesSEXP);
    rcpp_result_gen = Rcpp::wrap(solveBacktrack(sudoku, candidates, empties));
    return rcpp_result_gen;
END_RCPP
}
// solve_sudoku_
std::vector<int> solve_sudoku_(std::vector<int> sudoku, std::vector<int> nums);
RcppExport SEXP _sudokuplyr_solve_sudoku_(SEXP sudokuSEXP, SEXP numsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type sudoku(sudokuSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type nums(numsSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_sudoku_(sudoku, nums));
    return rcpp_result_gen;
END_RCPP
}
// as_sudoku_df_
IntegerMatrix as_sudoku_df_(IntegerVector values, IntegerVector row, IntegerVector col, IntegerVector box);
RcppExport SEXP _sudokuplyr_as_sudoku_df_(SEXP valuesSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP boxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type row(rowSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type col(colSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type box(boxSEXP);
    rcpp_result_gen = Rcpp::wrap(as_sudoku_df_(values, row, col, box));
    return rcpp_result_gen;
END_RCPP
}
// can_bes_getter_index
IntegerVector can_bes_getter_index(IntegerMatrix& sudoku_df, IntegerVector ind_list);
RcppExport SEXP _sudokuplyr_can_bes_getter_index(SEXP sudoku_dfSEXP, SEXP ind_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix& >::type sudoku_df(sudoku_dfSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ind_list(ind_listSEXP);
    rcpp_result_gen = Rcpp::wrap(can_bes_getter_index(sudoku_df, ind_list));
    return rcpp_result_gen;
END_RCPP
}
// cant_bes_getter
List cant_bes_getter(IntegerMatrix sudoku_df);
RcppExport SEXP _sudokuplyr_cant_bes_getter(SEXP sudoku_dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type sudoku_df(sudoku_dfSEXP);
    rcpp_result_gen = Rcpp::wrap(cant_bes_getter(sudoku_df));
    return rcpp_result_gen;
END_RCPP
}
// cant_bes_lengths
IntegerMatrix cant_bes_lengths(IntegerMatrix sudoku_df, List cant_bes);
RcppExport SEXP _sudokuplyr_cant_bes_lengths(SEXP sudoku_dfSEXP, SEXP cant_besSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type sudoku_df(sudoku_dfSEXP);
    Rcpp::traits::input_parameter< List >::type cant_bes(cant_besSEXP);
    rcpp_result_gen = Rcpp::wrap(cant_bes_lengths(sudoku_df, cant_bes));
    return rcpp_result_gen;
END_RCPP
}
// count_naked_singles_
int count_naked_singles_(IntegerMatrix sudoku_df, List cant_bes);
RcppExport SEXP _sudokuplyr_count_naked_singles_(SEXP sudoku_dfSEXP, SEXP cant_besSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type sudoku_df(sudoku_dfSEXP);
    Rcpp::traits::input_parameter< List >::type cant_bes(cant_besSEXP);
    rcpp_result_gen = Rcpp::wrap(count_naked_singles_(sudoku_df, cant_bes));
    return rcpp_result_gen;
END_RCPP
}
// check_integrity
bool check_integrity(IntegerMatrix sudoku_df);
RcppExport SEXP _sudokuplyr_check_integrity(SEXP sudoku_dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type sudoku_df(sudoku_dfSEXP);
    rcpp_result_gen = Rcpp::wrap(check_integrity(sudoku_df));
    return rcpp_result_gen;
END_RCPP
}
// element_checker
IntegerMatrix element_checker(IntegerMatrix sudoku_df, List cant_bes, int dimension);
RcppExport SEXP _sudokuplyr_element_checker(SEXP sudoku_dfSEXP, SEXP cant_besSEXP, SEXP dimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type sudoku_df(sudoku_dfSEXP);
    Rcpp::traits::input_parameter< List >::type cant_bes(cant_besSEXP);
    Rcpp::traits::input_parameter< int >::type dimension(dimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(element_checker(sudoku_df, cant_bes, dimension));
    return rcpp_result_gen;
END_RCPP
}
// num_empties
int num_empties(IntegerMatrix sudoku_df);
RcppExport SEXP _sudokuplyr_num_empties(SEXP sudoku_dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type sudoku_df(sudoku_dfSEXP);
    rcpp_result_gen = Rcpp::wrap(num_empties(sudoku_df));
    return rcpp_result_gen;
END_RCPP
}
// solve_logic_
IntegerMatrix solve_logic_(IntegerMatrix sudoku_df, bool verbose);
RcppExport SEXP _sudokuplyr_solve_logic_(SEXP sudoku_dfSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type sudoku_df(sudoku_dfSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_logic_(sudoku_df, verbose));
    return rcpp_result_gen;
END_RCPP
}
// count_hidden_singles_
int count_hidden_singles_(IntegerMatrix& sudoku_df);
RcppExport SEXP _sudokuplyr_count_hidden_singles_(SEXP sudoku_dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix& >::type sudoku_df(sudoku_dfSEXP);
    rcpp_result_gen = Rcpp::wrap(count_hidden_singles_(sudoku_df));
    return rcpp_result_gen;
END_RCPP
}
// solve_backtracking_
bool solve_backtracking_(IntegerMatrix& sudoku_df, IntegerVector& empties, bool& verbose, List ind_list, bool shuffle);
RcppExport SEXP _sudokuplyr_solve_backtracking_(SEXP sudoku_dfSEXP, SEXP emptiesSEXP, SEXP verboseSEXP, SEXP ind_listSEXP, SEXP shuffleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix& >::type sudoku_df(sudoku_dfSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type empties(emptiesSEXP);
    Rcpp::traits::input_parameter< bool& >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< List >::type ind_list(ind_listSEXP);
    Rcpp::traits::input_parameter< bool >::type shuffle(shuffleSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_backtracking_(sudoku_df, empties, verbose, ind_list, shuffle));
    return rcpp_result_gen;
END_RCPP
}
// solve_backtracking_all_
List solve_backtracking_all_(IntegerMatrix& sudoku_df, IntegerVector& empties, bool& verbose, List ind_list, bool shuffle, int& counter, List& out, bool stop_early);
RcppExport SEXP _sudokuplyr_solve_backtracking_all_(SEXP sudoku_dfSEXP, SEXP emptiesSEXP, SEXP verboseSEXP, SEXP ind_listSEXP, SEXP shuffleSEXP, SEXP counterSEXP, SEXP outSEXP, SEXP stop_earlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix& >::type sudoku_df(sudoku_dfSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type empties(emptiesSEXP);
    Rcpp::traits::input_parameter< bool& >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< List >::type ind_list(ind_listSEXP);
    Rcpp::traits::input_parameter< bool >::type shuffle(shuffleSEXP);
    Rcpp::traits::input_parameter< int& >::type counter(counterSEXP);
    Rcpp::traits::input_parameter< List& >::type out(outSEXP);
    Rcpp::traits::input_parameter< bool >::type stop_early(stop_earlySEXP);
    rcpp_result_gen = Rcpp::wrap(solve_backtracking_all_(sudoku_df, empties, verbose, ind_list, shuffle, counter, out, stop_early));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sudokuplyr_getEmpties", (DL_FUNC) &_sudokuplyr_getEmpties, 1},
    {"_sudokuplyr_getLengths", (DL_FUNC) &_sudokuplyr_getLengths, 2},
    {"_sudokuplyr_sortEmpties", (DL_FUNC) &_sudokuplyr_sortEmpties, 2},
    {"_sudokuplyr_getCandidates", (DL_FUNC) &_sudokuplyr_getCandidates, 2},
    {"_sudokuplyr_solveBacktrack", (DL_FUNC) &_sudokuplyr_solveBacktrack, 3},
    {"_sudokuplyr_solve_sudoku_", (DL_FUNC) &_sudokuplyr_solve_sudoku_, 2},
    {"_sudokuplyr_as_sudoku_df_", (DL_FUNC) &_sudokuplyr_as_sudoku_df_, 4},
    {"_sudokuplyr_can_bes_getter_index", (DL_FUNC) &_sudokuplyr_can_bes_getter_index, 2},
    {"_sudokuplyr_cant_bes_getter", (DL_FUNC) &_sudokuplyr_cant_bes_getter, 1},
    {"_sudokuplyr_cant_bes_lengths", (DL_FUNC) &_sudokuplyr_cant_bes_lengths, 2},
    {"_sudokuplyr_count_naked_singles_", (DL_FUNC) &_sudokuplyr_count_naked_singles_, 2},
    {"_sudokuplyr_check_integrity", (DL_FUNC) &_sudokuplyr_check_integrity, 1},
    {"_sudokuplyr_element_checker", (DL_FUNC) &_sudokuplyr_element_checker, 3},
    {"_sudokuplyr_num_empties", (DL_FUNC) &_sudokuplyr_num_empties, 1},
    {"_sudokuplyr_solve_logic_", (DL_FUNC) &_sudokuplyr_solve_logic_, 2},
    {"_sudokuplyr_count_hidden_singles_", (DL_FUNC) &_sudokuplyr_count_hidden_singles_, 1},
    {"_sudokuplyr_solve_backtracking_", (DL_FUNC) &_sudokuplyr_solve_backtracking_, 5},
    {"_sudokuplyr_solve_backtracking_all_", (DL_FUNC) &_sudokuplyr_solve_backtracking_all_, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_sudokuplyr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
