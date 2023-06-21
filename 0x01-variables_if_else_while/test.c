
#include <stdio.h>

/**
 * main - Print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int num;
  int c;

    for (num = 0; num < 10; num++){
        printf("%d", num);
    }
    putchar('\n');
/* simple list of all the integer value from 0-9 in ascii format */
    for (c = 48; c <= 57; c++){
        putchar(c);
        if ( c != 57 ){
            putchar(',');
            putchar(' ');
        }
    }

    return (0);
}

