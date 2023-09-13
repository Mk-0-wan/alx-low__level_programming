#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple operation and operands instructions which will be all done
 * in binary code
 *
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Description: opcodes short name for operation and operands. Just a set of
 * binary instructions which are passed into the micro processor to perform a
 * specific task
 *
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	/* function pointer to main */
	int (*f)(int, char **);
	int i = 0, n_hex_bytes;

	/* make sure two arguments are passed */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	/* only perform with positive integers */
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = main;
	/**
	 * making sure operation is done according to the number of
	 * bytes given
	 */
	while (i < atoi(argv[1]))
	{
		n_hex_bytes = *(unsigned char *)(f + i);
		printf("%.2x", n_hex_bytes);
		/* if you haven't yet reached the end put a space between them */
		if (i < atoi(argv[1]) - 1)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
