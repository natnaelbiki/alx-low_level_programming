#ifndef CALCFUNC
#define CALCFUNC

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - operator structure
 * @op: operator to be examined
 * @f: pointer to function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
