#ifndef SPECIFIER_T_H
#define SPECIFIER_T_H
/**
 * struct specifier_t - structure data
 * @specifier: variable
 * @print_function: functionc pointer
 *
 */
typedef struct specifier_t
{
char specifier;
int (*print_function)(va_list);
} specifier_t;

#endif
