## Dynamic Memory allocation
Imagine having the power of always making all the string of chars to fit in a given memory block and it's not fixed but flexible.
Able to change its size from small of big to whatever is passed to it for storage purpose.
Its like you will never lack memory for a given string and start worries if it will fit or not.
Again all this is done in the heap memory.

2D arrays => Think of it this way a parent and child.
But in our case a parent has many children and we need to make space for the parent together with each child the parent has each according to their own sizes.
This will be done using a double pointer meaning its pointing to another pointer to get the actual value stored inside of it.
So parent has all the memory address of the children values.

an example is that of an array of arrays where you will need to dynamically allocate the parent array and all the child arrays inside each according to their own length dynamically.
remember that all our children are single pointers alone.

example;
```c
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    
    int main(void)
    {
        int i = 0;
        size_t len = 0;
        /* 2D in C */
        char *ftr[] = { "Apple", "Mango", "Orange", "Bananas", "Lemon" };
        /* ftr is our parent array */
        /* get the legth of the array */
        len = sizeof(ftr) / sizeof(ftr[0]);
        /* allocate the parent size according to the length dont forget to add the null terminator */
        char **ftr_x = malloc(sizeof(char *) * (len + 1));
        /* allocate size to each child in the array */
        for (; i < len; i++)
        {
            ftr_x[i] = malloc(sizeof(char) * (strlen(ft[i]) + 1)); /* add the null terminator */
            if (!ftr_x[i])
            {
                /* deallocate any previous allacation of children that were either succeful */
                while (i >= 0)
                {
                    i--;
                    free(ftr_x[i]);
                }
                free(ftr_x); /* free the parent also */
                return (NULL);
            }
            strcpy(ftr_x[i], ftr[i]); /* will copy over even the null terminator */
        }
        for (i = 0; i < len; i++)
        {
            printf("%s\n", ftr_x[i]);
        }
        return (0);
    }
```
The array name(parent name) points to the whole array.
strcpy will copy everything including the null terminator.
Makes a copy of a statically allocated array to a dynamically allocated array.

