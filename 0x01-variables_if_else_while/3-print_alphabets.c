#include <stdio.h>
/**
 * main - Prints out the whole alphabets
 *
 * Return: Always (Success)
 */
int main(void)
{
	char a, A;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	A = 'A';
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}

