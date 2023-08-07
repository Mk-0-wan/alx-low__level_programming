#include "main.h"
#include <stddef.h>
/**
 * create_file - a function which makes a new file
 * @filename: the name of the file to be written.
 * @text_content: what will be inside the created file.
 * Return: 1 for a successful file creation while a -1 indicates failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = -1, n_writes = 0, len;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	while (text_content && *(text_content + len))
	{
		len++;
	}
	n_writes = write(fd, text_content, len);

	close(fd);
	if (n_writes == -1)
	{
		return (-1);
	}
	return (1);
}
