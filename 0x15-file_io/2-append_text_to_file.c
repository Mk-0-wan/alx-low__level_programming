#include "main.h"
#include <assert.h>
#include <stddef.h>
/**
 * append_text_to_file - a function which makes a new file
 * @filename: the name of the file to be written.
 * @text_content: what will be inside the created file.
 * Return: 1 for a successful file creation while a -1 indicates failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_writes, len = 0;

	/*check if file is there*/
	if (!filename)
	{
		return (-1);
	}
	/*open the file for read write and appending*/
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
	{
		/*when opening the file fails*/
		return (-1);
	}
	/*file is present but nothing was appended*/
	if (!text_content)
	{
		close(fd);
		return (1);
	};
	/*loop over the newly added string of chars*/
	while (*(text_content + len))
	{
		len++;
	}
	/*write to a file*/
	n_writes = write(fd, text_content, len);
	/*close the file*/
	close(fd);
	/*check if writing to a file failed*/
	if (n_writes < 0)
	{
		return (-1);
	}
	return (1);
}
