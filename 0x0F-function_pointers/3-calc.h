#ifndef _CALC_H_
#define _CALC_H_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int _putchar(char s);
int _strcmp(char *s1, char *s2);
int (*get_op_func(char *s))(int, int);
int _atoi(char *s);

#endif
