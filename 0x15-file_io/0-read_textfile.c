#include "main.h"

/**
 * read_textfile - read a text file and output its content to the STDOUT_FILENO
 * @filename: pointer to a memory address containing the content of the file.
 * @letters: number of bytes to write to the STDOUT_FILENO
 * Return: number of bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i = 0;
	int size_of_read_write = 0, ret = 0;
	char *local_buffer = NULL;

	if (!filename || !letters) /* check for empty buffers */
		return (0);

	fd = open(filename, O_RDONLY);/* read only mode */
	if (fd == -1)
	{
		return (0);
	}
	local_buffer = malloc(sizeof(char) * letters);
	if (!local_buffer)
		return (0);
	size_of_read_write = read(fd, local_buffer, letters); /* reading file */
	if (size_of_read_write == -1)
	{/* handling read */
		return (0);
	}
	close(fd);
	if (size_of_read_write < 0)
	{/* handling read */
		free(local_buffer);
		return (0);
	}
	if (!size_of_read_write)
		i = letters;
	size_of_read_write = write(STDOUT_FILENO, local_buffer, i);
	free(local_buffer); /* avoid memory leaks */
	/* write to STDOUT */
	if (size_of_read_write < 0)
	{
		return (0);
	}
	ret = size_of_read_write;/* keep record of the last write system call */
	return ((ssize_t)ret);
}
