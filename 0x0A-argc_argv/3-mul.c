#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 * @argc: the number of arguments(2)
 * @argv: the arguments to multiply
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	(void)j;
	for (i = 1; i < 3; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		sum *= atoi(argv[i]);
	}
	printf("the numtiplication of the two numbers is: %d", sum);

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
