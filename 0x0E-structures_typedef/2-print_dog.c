#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints all the members in a struct
 * @d: pointer to the data structer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
