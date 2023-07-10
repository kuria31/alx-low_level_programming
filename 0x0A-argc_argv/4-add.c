#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: the number of arguments
 * @argv: the positive numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	(void)j;
	for (i = 0; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
		if (argv[i] == " ")
		{
			printf("0\n");
		}
		else if (argv[i] > "!" || argv[i] < "/")
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", atoi(argv[i]));
	return (0);
}
