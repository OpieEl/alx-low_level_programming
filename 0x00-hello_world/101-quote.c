#include<stdio.h>
#include<unistd.h>

/**
 * main - A C program that prints a line to the standar error
 *
 * Return:1(success)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19", stderr);
	return (1);
}
