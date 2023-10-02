#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFSIZE 1024

/**
 * close_file - close all file descriptors passed to it
 * issues a warning if it fails
 * @fd: file descriptor
 * Return: void
 */
int close_file(int fd)
{
	int cls = -1;

	cls = close(fd);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (-1);
	}
	return (cls);
}
/**
 * read_file - going to read the original fd and make all the checks
 * @local_buffer: where we will store all the values
 * @file_from: file descriptor of the file passed
 * @argv: arguments list
 * Return: number of bytes read.
 */
ssize_t read_file(char *local_buffer, int file_from, char **argv)
{
	ssize_t n_bytes = 0;

	n_bytes = read(file_from, local_buffer, BUFFSIZE);
	if (n_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *argv);
		return (-1);
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
ssize_t write_file(char *local_buffer, int file_to, char **argv, ssize_t bytes)
{
	ssize_t bytes_to_write = 0;

	bytes_to_write = write(file_to, local_buffer, bytes);
	if (bytes_to_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", *argv);
		return (-1);
	}
	return (bytes_to_write);
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
	ssize_t bytes = 0;
	char local_buffer[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp_file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close_file(file_from);
		exit(99);
	}
	while ((bytes = read_file(local_buffer, file_from, &argv[1])))
	{
		if (bytes < 0)
		{
			close_file(file_to);
			close_file(file_from);
			exit(98);
		}
		if (write_file(local_buffer, file_to, &argv[2], bytes) < 0)
		{
			close_file(file_to);
			close_file(file_from);
			exit(99);
		}
	}
	bytes = close_file(file_to);
	if (bytes == -1)
	{
		close_file(file_from);
		exit(100);
	}
	bytes = close_file(file_from);
	if (bytes == -1)
		exit(100);
	return (0);
}
