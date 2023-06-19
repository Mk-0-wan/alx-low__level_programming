# include <stdio.h>

/**
 * main - listing out all the lowercase and uppercase
 * letter character by their own
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

