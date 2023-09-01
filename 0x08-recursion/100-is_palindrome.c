#include "main.h"
/**
 * _strlen_rc - length of a string
 * @s: pointer to a string
 * Return: length of the string
 */
int _strlen_rc(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_rc(s + 1));
}
/**
 * is_palindrome_rc - matching strings even when flipped or mirrored
 * @i: point to the first element int the array
 * @j: holds the length of the string
 * @s: pointer to a string of char
 * Return: 1 match found else return 0
 */
int is_palindrome_rc(char *s, int i, int j)
{
	/* checks for matching chars */
	if (i >= j)
		return (1);
	/* non-matching chars found also our exit point*/
	if (s[i] != s[j])
		return (0);
	return (is_palindrome_rc(s, i + 1, j - 1));
}
/**
 * is_palindrome - matching strings even when flipped or mirrored
 * @s: pointer to a string of char
 * Return: 1 match found else return 0
 */
int is_palindrome(char *s)
{
	int j = _strlen_rc(s);

	if (!s)
		return (0);
	if (j <= 1)
		return (1);
	return (is_palindrome_rc(s, 0, (j - 1)));
}
