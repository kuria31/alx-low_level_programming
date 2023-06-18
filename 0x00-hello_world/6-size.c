#include <stdio.h>
/**
 * main - functio to print the size of identifiers
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("Size of a char: %c byte(s)", sizeof(a));
printf("Size of an int: %d byte(s)", sizeof(b));
printf("Size of a long int: %lu byte(s)", sizeof(c));
printf("Size of a long long int: %lu byte(s)", sizeof(d));
printf("Size of a float: %f byte(s)", sizeof(e));
return (0);
}
