#include <stdlib.h>
#include "main.h"
/**
 * _memeset - fill the memory with one type of byte
 * @s: memory to be filled
 * @b: the chars to be filled in the memory
 * @n: times will copy b to the memory
 * Return: pointer of the memory area s
 */
char *_memeset(char *s, char b, unsigned int n)
{
	/*used to keep track of elements in pointer s*/
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/* fill in all the element space of pointer s with char b*/
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocate memory to an array with specific type
 * @nmemb: number of elements in the array
 * @size: sizeof each elements in the array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	/*
	 * first look for the values of both the no of elements in array
	 * and also the size of the array
	 */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/*
	 * if the condition passed then allocate size memory
	 * by of (the size of each element * number of elements present in the array)
	 */

	s = malloc(size * nmemb);
	/*check if memory allocation was succesfull if not return NULL*/
	if (!s)
	{
		return (NULL);
	}
	/*setting each element in the array to be zero*/
	_memeset(s, 0, nmemb * size);

	return (s);
}
