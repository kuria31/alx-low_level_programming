#include "variadic_functions.h"
/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list(args);

	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
		printf("\n");

		va_end(args);
	}
}