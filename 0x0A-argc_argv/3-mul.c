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

	(void)sum;
	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
