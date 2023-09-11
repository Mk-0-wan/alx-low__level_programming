#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new object from the data structure
 * @name: string of chars that represents the name of the dog
 * @age: float integer representing the dog's age
 * @owner: string of chars representing the owner's name
 * Return: a new data structure with new object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *obj_holder;

	obj_holder = malloc(sizeof(dog_t));
	if (!obj_holder)
		return (NULL);

	obj_holder->age = age;
	obj_holder->owner = owner;
	obj_holder->name = name;

	return (obj_holder);
}
