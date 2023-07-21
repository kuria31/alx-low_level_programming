#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARRIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif