// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/re2r.h"
#include <Rcpp.h>

using namespace Rcpp;

// cpp_locate
SEXP cpp_locate(CharacterVector input, XPtr<RE2>& regexp, bool all, bool parallel, size_t grain_size);
RcppExport SEXP re2r_cpp_locate(SEXP inputSEXP, SEXP regexpSEXP, SEXP allSEXP, SEXP parallelSEXP, SEXP grain_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    Rcpp::traits::input_parameter< bool >::type all(allSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< size_t >::type grain_size(grain_sizeSEXP);
    __result = Rcpp::wrap(cpp_locate(input, regexp, all, parallel, grain_size));
    return __result;
END_RCPP
}
// cpp_match
SEXP cpp_match(CharacterVector input, XPtr<RE2>& ptr, bool value, size_t anchor, bool all, bool parallel, size_t grain_size);
RcppExport SEXP re2r_cpp_match(SEXP inputSEXP, SEXP ptrSEXP, SEXP valueSEXP, SEXP anchorSEXP, SEXP allSEXP, SEXP parallelSEXP, SEXP grain_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< bool >::type value(valueSEXP);
    Rcpp::traits::input_parameter< size_t >::type anchor(anchorSEXP);
    Rcpp::traits::input_parameter< bool >::type all(allSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< size_t >::type grain_size(grain_sizeSEXP);
    __result = Rcpp::wrap(cpp_match(input, ptr, value, anchor, all, parallel, grain_size));
    return __result;
END_RCPP
}
// cpp_regex_simplify
SEXP cpp_regex_simplify(XPtr<RE2>& regexp);
RcppExport SEXP re2r_cpp_regex_simplify(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(cpp_regex_simplify(regexp));
    return __result;
END_RCPP
}
// cpp_split
SEXP cpp_split(CharacterVector input, XPtr<RE2>& ptr, NumericVector part, bool fixed, bool parallel, size_t grain_size);
RcppExport SEXP re2r_cpp_split(SEXP inputSEXP, SEXP ptrSEXP, SEXP partSEXP, SEXP fixedSEXP, SEXP parallelSEXP, SEXP grain_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type part(partSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed(fixedSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< size_t >::type grain_size(grain_sizeSEXP);
    __result = Rcpp::wrap(cpp_split(input, ptr, part, fixed, parallel, grain_size));
    return __result;
END_RCPP
}
// cpp_re2_compile
SEXP cpp_re2_compile(CharacterVector input, bool log_errors_value, bool utf_8_value, bool posix_syntax_value, bool case_sensitive_value, bool dot_nl_value, bool literal_value, bool longest_match_value, bool never_nl_value, bool never_capture_value, bool one_line_value, bool perl_classes_value, bool word_boundary_value, int64_t max_mem_value, bool simplify_value);
RcppExport SEXP re2r_cpp_re2_compile(SEXP inputSEXP, SEXP log_errors_valueSEXP, SEXP utf_8_valueSEXP, SEXP posix_syntax_valueSEXP, SEXP case_sensitive_valueSEXP, SEXP dot_nl_valueSEXP, SEXP literal_valueSEXP, SEXP longest_match_valueSEXP, SEXP never_nl_valueSEXP, SEXP never_capture_valueSEXP, SEXP one_line_valueSEXP, SEXP perl_classes_valueSEXP, SEXP word_boundary_valueSEXP, SEXP max_mem_valueSEXP, SEXP simplify_valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< bool >::type log_errors_value(log_errors_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type utf_8_value(utf_8_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type posix_syntax_value(posix_syntax_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type case_sensitive_value(case_sensitive_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type dot_nl_value(dot_nl_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type literal_value(literal_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type longest_match_value(longest_match_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type never_nl_value(never_nl_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type never_capture_value(never_capture_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type one_line_value(one_line_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type perl_classes_value(perl_classes_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type word_boundary_value(word_boundary_valueSEXP);
    Rcpp::traits::input_parameter< int64_t >::type max_mem_value(max_mem_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type simplify_value(simplify_valueSEXP);
    __result = Rcpp::wrap(cpp_re2_compile(input, log_errors_value, utf_8_value, posix_syntax_value, case_sensitive_value, dot_nl_value, literal_value, longest_match_value, never_nl_value, never_capture_value, one_line_value, perl_classes_value, word_boundary_value, max_mem_value, simplify_value));
    return __result;
END_RCPP
}
// get_expression_size
int get_expression_size(XPtr<RE2>& regexp);
RcppExport SEXP re2r_get_expression_size(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(get_expression_size(regexp));
    return __result;
END_RCPP
}
// cpp_get_pattern
SEXP cpp_get_pattern(XPtr<RE2>& ptr);
RcppExport SEXP re2r_cpp_get_pattern(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type ptr(ptrSEXP);
    __result = Rcpp::wrap(cpp_get_pattern(ptr));
    return __result;
END_RCPP
}
// get_number_of_groups
int get_number_of_groups(XPtr<RE2>& regexp);
RcppExport SEXP re2r_get_number_of_groups(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(get_number_of_groups(regexp));
    return __result;
END_RCPP
}
// cpp_get_named_groups
SEXP cpp_get_named_groups(XPtr<RE2>& ptr);
RcppExport SEXP re2r_cpp_get_named_groups(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type ptr(ptrSEXP);
    __result = Rcpp::wrap(cpp_get_named_groups(ptr));
    return __result;
END_RCPP
}
// cpp_quote_meta
SEXP cpp_quote_meta(CharacterVector input, bool parallel, size_t grain_size);
RcppExport SEXP re2r_cpp_quote_meta(SEXP inputSEXP, SEXP parallelSEXP, SEXP grain_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< size_t >::type grain_size(grain_sizeSEXP);
    __result = Rcpp::wrap(cpp_quote_meta(input, parallel, grain_size));
    return __result;
END_RCPP
}
// cpp_replace
SEXP cpp_replace(CharacterVector input, SEXP regexp, CharacterVector rewrite_, bool global_, bool parallel, size_t grain_size);
RcppExport SEXP re2r_cpp_replace(SEXP inputSEXP, SEXP regexpSEXP, SEXP rewrite_SEXP, SEXP global_SEXP, SEXP parallelSEXP, SEXP grain_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< SEXP >::type regexp(regexpSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type rewrite_(rewrite_SEXP);
    Rcpp::traits::input_parameter< bool >::type global_(global_SEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< size_t >::type grain_size(grain_sizeSEXP);
    __result = Rcpp::wrap(cpp_replace(input, regexp, rewrite_, global_, parallel, grain_size));
    return __result;
END_RCPP
}
// cpp_extract
SEXP cpp_extract(CharacterVector input, SEXP regexp, bool all, bool parallel, size_t grain_size);
RcppExport SEXP re2r_cpp_extract(SEXP inputSEXP, SEXP regexpSEXP, SEXP allSEXP, SEXP parallelSEXP, SEXP grain_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< SEXP >::type regexp(regexpSEXP);
    Rcpp::traits::input_parameter< bool >::type all(allSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< size_t >::type grain_size(grain_sizeSEXP);
    __result = Rcpp::wrap(cpp_extract(input, regexp, all, parallel, grain_size));
    return __result;
END_RCPP
}
// cpp_get_program_fanout
SEXP cpp_get_program_fanout(XPtr<RE2>& regexp);
RcppExport SEXP re2r_cpp_get_program_fanout(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(cpp_get_program_fanout(regexp));
    return __result;
END_RCPP
}
// cpp_regex_to_string
SEXP cpp_regex_to_string(XPtr<RE2>& regexp);
RcppExport SEXP re2r_cpp_regex_to_string(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(cpp_regex_to_string(regexp));
    return __result;
END_RCPP
}
// cpp_regex_mimicsPCRE
LogicalVector cpp_regex_mimicsPCRE(XPtr<RE2>& regexp);
RcppExport SEXP re2r_cpp_regex_mimicsPCRE(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(cpp_regex_mimicsPCRE(regexp));
    return __result;
END_RCPP
}
