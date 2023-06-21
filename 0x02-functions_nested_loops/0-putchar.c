# include <stdio.h>
/**
 * main - print _putchar with c
 *
 * Return: Always 0 (Success)
 */

char _putchar(char c)

int main(void)
{
	char str[] = "Hello world";
	int i;
	
	for (i = 0; str[i] != "\0"; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
char _putchar(char c)
{
	putchar(c);
	return c;
} 
