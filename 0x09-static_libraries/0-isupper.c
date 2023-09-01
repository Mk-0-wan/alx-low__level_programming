#include "main.h"

/**
 * _isupper - check whether char passed is uppercase
 * @c: placeholder for the chars
 * Return: 1 is success (is upper case) 0 not uppercase
 */
int _isupper(int c)
{
	return ((c >= 65 || c <= 90) ? 1 : 0);

}
