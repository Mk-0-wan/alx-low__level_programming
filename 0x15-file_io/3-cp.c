#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
void err_read(char *file_name);
void err_write(char *file_name);
int read_file(int fd, char *buff);
int f_close(int fd);
/**
 * main - makes a copy of the same file to another file.
 * @argc: counts the number of files given
 * @argv: string of chars which will include the names of the files
 * Return: 0 success -1 fails
 */
int main(int argc, char **argv)
{
	char buff[1024];
	int fd_1 = -1, fd_2 = -1, write_err = 1, no_reads = 1, close_err = 1;

	if (argc != 3)/*check number of arguments passed*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
	{
		err_read(argv[1]);
		exit(98);
	}
	/*open a file or create one with the mode rw.rw.r*/
	fd_2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (fd_2 == -1)
	{
		err_write(argv[2]);
		f_close(fd_1); /*close the previously opened file*/
		exit(99);
	}
	/*read and write to another file*/
	while (no_reads != 0)
	{
		if (no_reads == 0)
		{
			break;
		}
		no_reads = read_file(fd_1, buff);
		if (no_reads == -1)
		{
			err_read(argv[1]); /*problem while reading file*/
			f_close(fd_1); /*close the first opened file*/
			f_close(fd_2); /*close the second closed file*/
			exit(98);
		}
		write_err = write(fd_2, buff, no_reads);
		if (write_err == -1)
		{
			err_write(argv[2]); /*problem writing file*/
			f_close(fd_1); /*close the first opened file*/
			f_close(fd_2); /*close the second closed file*/
			exit(99);
		}
	}
	close_err = f_close(fd_2);/*close the second file*/
	if (close_err == -1)/*check for close failure*/
	{
		f_close(fd_1);
		exit(100);
	}
	close_err = f_close(fd_1);/*close the first file*/
	if (close_err == -1) /*exit when close file failed*/
	{
		exit(100);
	}
	return (0);
}
/**
 * read_file - reads the opened file and returns  an int
 * @fd:file descriptor
 * @buff: buffer size
 * Return: 0 file was read -1 failed to read file
 */
int read_file(int fd, char *buff)
{
	int n_reads = 0;

	n_reads = read(fd, buff, 1024);

	return (n_reads);
}
/**
 * err_read - returns an error message when read or opening a file.
 * @file_name: actual file
 * Return: void
 */
void err_read(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
}

/**
 * err_write - returns an error message when read or opening a file.
 * @file_name: actual file
 * Return: void
 */
void err_write(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
}

/**
 * f_close - close a file safely
 * @fd: special int number of the opened file
 * Return: void
 */
int f_close(int fd)
{
	int err = 1; /*checks the return value*/

	err = close(fd);
	if (err == -1)
	{
		dprintf(fd, "Error: Can't close fd %d\n", fd);
	}
	return (err);
}
