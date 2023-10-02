#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFSIZE 1024
/**
 * read_file - going to read the original fd and make all the checks
 * @local_buffer: where we will store all the values
 * @file_from: file descriptor of the file passed
 * @argv: arguments list
 * Return: number of bytes read.
 */
int read_file(char **local_buffer, int file_from, char **argv)
{
	int n_bytes = 0;

	n_bytes = read(file_from, *local_buffer, BUFFSIZE);
	if (n_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *argv);
		exit(98);
	}
	return (n_bytes);
}
/**
 * write_file - going to read the original fd and make all the checks
 * @local_buffer: where we will store all the values
 * @file_to: file descriptor of the file passed
 * @argv: arguments list
 * @bytes: number of bytes to write
 * Return: number of bytes read.
 */
int write_file(char **local_buffer, int file_to, char **argv, int bytes)
{
	int bytes_to_write = 0;

	bytes_to_write = write(file_to, *local_buffer, bytes);
	if (bytes_to_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", *argv);
		exit(99);
	}
	return (bytes_to_write);
}
/**
 * close_file - close all file descriptors passed to it
 * issues a warning if it fails
 * @fd: file descriptor
 * Return: void
 */
void close_file(int fd)
{
	int cls = -1;

	cls = close(fd);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - a simple cp function all written in c.
 * @argc: arguments counts
 * @argv: arguments list
 * Return: 0 success, otherwise fail.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int bytes = 0;
	char *local_buffer = malloc(BUFFSIZE);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp_file_from file_to\n");
		exit(97);
	}

	if (!local_buffer)
		return (1);

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	bytes = read_file(&local_buffer, file_from, &argv[1]);
	close_file(file_from);

	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	write_file(&local_buffer, file_to, &argv[2], bytes);
	close_file(file_to);
	free(local_buffer);
	return (0);
}
