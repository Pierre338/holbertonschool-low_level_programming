#include <stdio.h>
/**
 * main - w
 * @argc: c
 * @argv: v
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
