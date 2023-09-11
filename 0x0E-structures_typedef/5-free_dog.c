#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free all the memory allocated to the dog_t structure
 * @d: pointer to the dynamically allocated structure
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
