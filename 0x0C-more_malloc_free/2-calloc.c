#include "main.h"

/**
 * _calloc - a replica of the calloc function in c
 * @nmemb: number of members in the heap memory
 * @size: datatype of the array being created
 * Return: pointer to the 0 initialized memory heap
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *temp;
	int i = 0, *set;

	if (nmemb == 0 || size == 0)
		return (NULL);

	temp = malloc(sizeof(size) * nmemb);
	MALLOC_CHECK(temp);
	/* initialize all the space to value 0 */
	set = (int *)temp;
	for (; i < nmemb; i++)
		set[i] = 0;
	return (temp);
}



