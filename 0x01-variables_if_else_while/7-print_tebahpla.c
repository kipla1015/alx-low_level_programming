#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
   * main - this is the function
   * Return: always 0
   */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
