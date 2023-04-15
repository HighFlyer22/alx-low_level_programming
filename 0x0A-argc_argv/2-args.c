#include <stdio.h>

/**
 * main - Entry point
 * @argc: Count of the arguments
 * @argv: Array of pointers to string arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
