#include "main.h"
#include <stdio.h>

/**
 * main - testing ground
 * Return: 0 success
 */
int main(void)
{
	int d = 4;
	int x, y, z, n, m, t;
	char foo[] = "foo";
	char boo[] = "foo is back";
	char xoo[] = "A cool testing ground";
	char voo[] = "Huge testing ground";
	char too[] = "oof";
	char yoo[] = "foo is not back";
	char eoo[] = "i am better";
	char qoo[50] = "I do hard";
	char ooo[] = "things";
	char soo[] = "Software";
	char hoo[] = "engineer";
	char roo[] = "foo";

	x = _atoi(foo);
	y = _strcmp(foo, roo);
	z = _islower('H');
	n = _isalpha('6');
	m = _abs(-45453);
	t = _isdigit(66);

	printf("atoi value : %d\n", x);
	printf("strcmp value : %d\n", y);
	printf("islower value : %d\n", z);
	printf("_isalpha value : %d\n", n);
	printf("_abs value : %d\n", m);
	printf("_isdigit value : %d\n", t);
	printf("_strlen value : %d\n", _strlen(hoo));
	printf("_strspn value : %d\n", _strspn(yoo, boo));
	printf("_strstr value : %s\n", _strstr(xoo, voo));
	printf("_strpbrk value : %s\n", _strpbrk(too, roo));
	printf("_strchr value : %s\n", _strchr(ooo, 'i'));
	printf("_strcmp value : %d\n", _strcmp(foo, too));
	printf("_strncat value : %s\n", _strncat(qoo, ooo, _strlen(ooo) - 1));
	printf("_strncpy value : %s\n", _strncpy(eoo, hoo, 8));
	printf("_strcat value : %s\n", _strcat(soo, hoo));
	printf("_memcpy value : %s\n", _memcpy(roo, hoo, d));
	printf("_memset value : %s\n", _memset(soo, 'a', 6));
	return (0);
}
