#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string separating the strings
 * @n: number of strings passsed
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list(args);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		printf("%s", string);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(args);
}
