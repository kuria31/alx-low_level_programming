#include <stdio.h>
/**
 * main - arguments
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	printf("argc = %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
