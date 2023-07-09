#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: the number of arguments passed
 * @argv: the arguments passed,strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
