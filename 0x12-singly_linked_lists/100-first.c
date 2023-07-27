#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a string before main
 */
void first(void)
{
	char *str = "You're beat! and yet, you must allow,\n";
	char *str2 = "I bore my house upon my back!\n";

	printf("%s%s", str, str2);
}
