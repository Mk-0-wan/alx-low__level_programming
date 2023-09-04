#ifndef _MAIN_H_
#define _MAIN_H_


/* Header Files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Custom Macro */
#define MALLOC_CHECK(x) \
	do \
	{\
		if (!(x))\
		{\
			return (NULL);\
		}\
	} while (0)

/* Function prototypes */
char *create_array(unsigned int size, char c);
int _putchar(char c);
#endif
