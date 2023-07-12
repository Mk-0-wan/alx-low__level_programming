#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * _islower - checking which characters are in lowercase and returns 1
 * @c: int data type for storing the chars
 *
 * Return: 1 if true otherwise 0 if false
 */

int _islower(int c)
{
	return ((c >= 65 && c <= 91) ? 1 : 0);
}
