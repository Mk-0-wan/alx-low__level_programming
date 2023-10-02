#include "main.h"

/**
 * append_text_to_file - appends new sequence of chars to the file opened.
 * @filename: file to append the new content.
 * @text_content: string of chars to append to the file.
 * Return: 1 success, -1 fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = -1, size_to_write = 0;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content && text_content[len])
		len++;

	/* start writing to the file */
	if (len >= 0)
		size_to_write = write(fd, text_content, len);

	if (size_to_write == -1)
		return (-1);

	close(fd);
	return (1);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
