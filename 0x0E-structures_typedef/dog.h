#ifndef DOG_H
#define DOG_H

/* Header files */
#include <stdio.h>
#include <stdlib.h>

#define MALLOC_CHECK(x)\
	do{\
		if (!(x))\
			return (NULL);\
	}while(0)
/**
 * struct dog - simple data struct for a dog
 * @name: name of the dog
 * @float: holds the age of the dog
 * @owner: name of the owner
 *
 * Description: Simple declaration of a data structure of a dog
 * age and its owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef struct dog
 */
typedef struct dog dog_t;

/* defined function */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
