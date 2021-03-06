#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: argument count
 * @argv: argument vector (passed as an array of strings)
 * Description: using atoi to convert a char to an int
 * Return: 0 if good, 1 if error
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE); /* unsuccessful execution */
	}
	if (argv[1] && argv[2]) /* 1 & 2 for both indexes */
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (EXIT_SUCCESS); /* successful execution */
}
