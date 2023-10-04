#include <stdio.h>

/**
   * main - prints the number of args
   * @argc - argument count
   * @argv - argument vector
   * Return: always 0 (success)
   */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/

	printf("%d\n", argc);
	return (0);
}
