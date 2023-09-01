#include "main.h"

/**
 * _isalpha - checking if the chars are either lowercase or uppercase
 * @c: used to store all the checked chars
 * Return: 1 if true otherwise 0 if false
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 91) ? 1 : (c >= 97 && c <= 123) ? 1 : 0);
}
