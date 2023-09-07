#ifndef _MAIN_H_
#define _MAIN_H_

/* Custom Macros */
#define MALLOC_CHECK(x)\
	do{\
		if (!(x))\
		{\
			exit(98);\
		}\
	} while (0)

/* Header files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototypes */
int _putchar(char c);
void *malloc_checked(unsigned int b);


#endif
