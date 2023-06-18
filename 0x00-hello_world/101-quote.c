#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * main - This is a function that prints a file using the write function.
 * Return: 1(Succes)
 */
int main(void)
{
int a;
a = write(1, "\"and that piece of art is useful\"\ \-\ Dora Korpar, 2015-10-19", 100);
}
