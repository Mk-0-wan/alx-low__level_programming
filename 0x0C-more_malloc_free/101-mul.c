#include "main.h"
#include <stdlib.h>

/**
 * _array_int - array of integers
 * @string: pointer to a string of char
 * Return: array of int
 */
long int *_array_int(char *string)
{
	long int count = 0, i, temp, arr;
	long int *array;


	arr = _atoi(string);
	temp = arr;
	while (temp > 0)
	{
		temp /= 10;
		count++;
	}
	array = malloc(count * sizeof(long int));
	MALLOC_CHECK(array);

	i = count - 1;
	while (i > 0)
	{
		array[i] = arr % 10;
		arr /= 10;
		i--;
	}

	return (array);
}
/**
 * _intlen - gets the length of int
 * @s1: pointer to a string of chars
 * Return: len of the integers
 */
long int _intlen(char *s1)
{
	long int temp, inTs, count;

	inTs = _atoi(s1);
	temp = inTs;
	count = 0;
	while (temp > 0)
	{
		temp /= 10;
		count++;
	}
	return (count - 1); /* avoid going overboard */
}
/**
 * _c_mul - advanced multiplication logic method.
 * @array1: first number given.
 * @array2: second number given.
 * Return: array of int values that are the result product of the two numbers.
 */
void _c_mul(char *array1, char *array2)
{
	long int num1, num2, i = 0, j = 0, *a, *b;
	long int  product, *results, position;
	long int digit1, digit2;
	long int len = 0;

	a = _array_int(array1);
	b = _array_int(array2);

	digit1 = _intlen(array1);
	digit2 = _intlen(array2);

	for (; i < digit1; i++)
	{
		for (; j < digit2; j++)
		{
			num1 = a[(digit1 + 1) - 1 - i]; /* positions */
			num2 = b[(digit2 + 1) - 1 - j];
			position = (((digit1 + 1) + (digit2 + 1)) - 1 - i - j);
			product = num1 * num2;

			results = _calloc((digit1 + digit2 + 2), sizeof(long int));
			MALLOC_CHECK(results);

			results[position] += product;

			if (results[position] > 9)
			{
				results[position - 1] += product / 10;
				results[position] += product % 10;
			}
		}
	}
	len = ((digit1 + digit2) + 2);
	for (i = 0; i < len - 1; i++)
	{
		printf("%ld", results[i]);
	}
	free(a);
	free(b);
	free(results);
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		perror("invalid argument");
		exit(EXIT_FAILURE);
	}
	_c_mul(argv[1], argv[2]);
	return (0);
}

/**
 * mul - complex multiplication algorithm
 * first make the integers into a array
 * get the length of each int values
 * make another for loop which will be used to hold the values passed
 * product = digit[1 - i] or digit[1 - j]
 * result[] += product (make sure to use calloc for dynamic memory with int)
 * all the slots will have only integers not greater than 9
 * split them into two
 * store the first index in the current slot
 * and the other one in the previous slot.
 * Keep on repeating this over and over again.
 * logic for working with positions = 2 + 2 - 1 - i - j;
 */
