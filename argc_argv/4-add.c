#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
