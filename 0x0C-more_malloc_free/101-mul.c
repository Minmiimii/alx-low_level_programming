#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *  * main - multiplies two positive numbers
 *   * @argc: n arguments
 *    * @argv: args
 *     * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("Error\n");
			exit(98);
		}
	}
}
mul = atoi(argv[1]) *  atoi(argv[2]);
printf("%lu\n", mul);
return (0);
}
