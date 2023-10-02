#include "main.h"
#include <unistd.h>

/**
 * create_file - creates a file to the file system.
 * @filename: name of the file to create.
 * @text_content: contains the data to store to the new file.
 * Return:  1 success , -1 fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = -1, size_to_write = 0;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	/* start writting to the file */
	while (text_content && text_content[len])
		len++;

	if (len >= 0)
		size_to_write = write(fd, text_content, len);
	if (size_to_write == -1)
		return (-1);

	close(fd);
	return (1);
}
