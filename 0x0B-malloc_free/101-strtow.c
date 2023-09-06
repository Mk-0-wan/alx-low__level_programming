#include "main.h"
/**
 * _xwords - get the number of words in an array
 * @str: pointer to a string
 * Return: x number of words in a string
 */
int _xwords(char *str)
{
	int w_count = 0, check = 1;

	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			check = 1;
		else if (check)
		{
			check = 0;
			w_count++;
		}
		str++;
	}
	return (w_count);
}
/**
 * x_word - searching for words in string of chars
 * @str: pointer to a string of chars
 * Return: pointer to the found word in the string of chars
 */
char *x_word(char *str)
{
	int check = 0;

	while (*str)
	{
		/* searching for words inside the white space */
		if (*str == ' ' || *str == '\t')
			check = 1;
		else if (check) /* found the word */
			break;
		str++;
	}
	return (str); /* return a pointer to the word once you find it */
}
/**
 * strtow - getting words out of a string
 * @str: pointer to a string of chars
 * Return: array of arrays with each string in a new line
 */
char **strtow(char *str)
{
	int i = 0, w_len = 0, j = 0, wr_l = 0;
	char **f_words;

	if (!str || !*str) /* ignore empty strings */
		return (NULL);
	w_len = _xwords(str);
	if (w_len == 0)
		return (NULL);
	/* allocate memory to the parent array */
	f_words = malloc(sizeof(char *) * (w_len + 1));
	MALLOC_CHECK(f_words);
	/* allocate memory to the children arrays */
	while (i < w_len)
	{
		/* first get words out of the string */
		if (*str == ' ' || *str == '\t')
			str = x_word(str);
		wr_l = 0;
		/* allocate memory to all the found words */
		while (str[wr_l] != ' ' && str[wr_l] != '\t' && str[wr_l] != '\0')
			wr_l++;
		f_words[i] = malloc(sizeof(char) * (wr_l + 1));
		MAL_ARC(f_words, i);
		j = 0;
		while (j < wr_l)
		{
			/* copy over each word to the parent and child array */
			f_words[i][j] = str[j];
			j++;
		}
		f_words[i][j] = '\0'; /* add a null terminator to each word */
		str += wr_l; /* move str pointer to the next word in line */
		i++;
	}
	f_words[i] = NULL; /* last element in the array set to NULL */
	return (f_words);
}
