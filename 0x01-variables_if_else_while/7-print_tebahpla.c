# include <stdio.h>
/**
 * main - list out the numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	num = 'z';
	while (num >= 'a')
	{
		putchar(num);
		num--;
	}
	putchar('\n');
	return (0);
}

