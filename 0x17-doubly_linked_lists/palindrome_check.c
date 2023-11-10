#include <stdio.h>
char is_palindrome(unsigned int num);
/**
 * main - entry point to find palindrome program
 *
 * Return: always 0
 */
int main(void)
{
	unsigned int outer_digit, inner_digit, temp, max;

	max = 0;
	for (outer_digit = 100; outer_digit <= 999; outer_digit++)
	{
		for (inner_digit = 100; inner_digit <= 999; inner_digit++)
		{
			temp = outer_digit * inner_digit;
			if (is_palindrome(temp))
				max = (temp > max) ? temp : max;
		}
	}
	printf("Largest palindrome product of 3 digit numbers is: %d\n", max);
}

char is_palindrome(unsigned int num)
{
	unsigned int reverse = 0, rem = 0, n = num;

	while (n != 0)
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n /= 10;
	}
	if (reverse == num)
		return (1);
	return (0);
}