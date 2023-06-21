#include  <stdio.h>

char print_alphabet(char c);

/**
 * main - prints all the alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 122; i++)
	{
		print_alphabet(i);
	}
	putchar('\n');

	return (0);
}

/**
 * print_alphabet - Entry point
 *
 * Description: 'Prints all the lowercase letters'
 * @c: defines where the characters should start from
 *
 * Return: Always c (Success)
 */

char print_alphabet(char c)
{
	putchar(c);
	return (c);
}
