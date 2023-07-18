#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - keeping track of char len
 * @s: pointer to the actual value
 * Return: len of the value
 */
int _strlen(char *s)
{
	unsigned int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - makes a copy of the original
 * @dest: where to copy to
 * @src: where to copy from
 * Return: s (Newly copied value)
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int l1, x;

	l1 = 0;
	while (src[l1] != '\0')
	{
		l1++;
	}

	/*loop over to make a copy of the src*/
	for (x = 0; x < l1; x++)
	{
		dest[x] = src[x];
	}
	/*add the end of line char*/
	dest[x] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * Return: a pointer of the new copied dog data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*create a pointer to the elements*/
	dog_t *dog;
	int x1, x2;

	x1 = _strlen(name);
	x2 = _strlen(owner);

	/*allocate the memory dynamically*/
	dog = malloc(sizeof(dog_t));
	/*check if allocation was successful*/
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (x1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	/*allocating memory to the owner name*/
	dog->owner = malloc(sizeof(char) * (x2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	/*making copies of both the owner and dog name*/
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
