#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Entry point
 *
 * @num1: used to store the digits passed in as the argument for conversion
 *
 * Return: void returns only the functions which i have defined inside the return statement
 */
int print_last_digit(int num1)
{
	int x;
	
	if (num1 < 0){
		x = abs(num1);
		return (x % 10);
	}
	else{
		return (num1 % 10);
	}
}
