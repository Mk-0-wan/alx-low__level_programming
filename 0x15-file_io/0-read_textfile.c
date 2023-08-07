#include "main.h"
/**
 * read_textfile - a function which reads a text file and outputs to the stdout
 * @filename: pontinter to the actual file.
 * @letters: the number of letters it should print.
 * Return: returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n_reads = -1, len = 0, fd;
	char *bak;

	if (!filename)
	{
		return (0);
	}

	bak = malloc(sizeof(char) * letters);
	if (!bak)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(bak);
		return (0);
	}
	n_reads = read(fd, bak, letters);
	if (n_reads == -1)
	{
		free(bak);
		return (0);
	}
	while (bak && bak[len])
	{
		len++;
	}
	n_reads = write(STDOUT_FILENO, bak, len);
	free(bak);
	close(fd);
	if (n_reads == -1)
	{
		return (0);
	}
	return ((ssize_t)n_reads);
}
