#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/stat.h>

typedef enum token_types{
	t_eq,
	t_neq,
	t_ge,
	t_le,
	t_end,
	t_if,
	t_elif,
	t_syscall,
	t_exit,
	t_add,
	t_sub,
	t_mult,
	t_div,
	t_else,
	t_for,
	t_while, // might just be a shorthand for a for loop
	t_modulo,
	t_negative,
	t_num, // for now this is a 1 byte int
	t_char,
	t_string,
	t_struct,
	t_null,
	t_arr,
	t_nan,
	t_name, // variable name
	t_col,
	t_row,
	t_lpar,
	t_rpar,
	t_lbrack,
	t_rbrack,
	t_label,
	t_assignment,
	t_count
} token;

struct token_info{
	token id;
	int col;
	int row;
	const char const* file;
};
