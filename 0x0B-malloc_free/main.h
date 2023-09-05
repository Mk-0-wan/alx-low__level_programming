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

#define MAL_ARC(x,len)\
	do\
	{\
		if(!(x[len]))\
		{\
			while (len >= 0)\
			{\
				len--;\
				free(x[len]);\
			}\
			free(x);\
			return (NULL);\
		}\
	} while (0)

/* Function prototypes */
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#endif
