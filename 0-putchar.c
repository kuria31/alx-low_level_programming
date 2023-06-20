#include <unistd.h>
/**
 * main -  program that prints _putchar, followed by a new line.
 * Return - 0 (Success)
 */
int _putchar(char c)
{
	char c = "_putchar\n"
		return(write(1,&c,8));
}
