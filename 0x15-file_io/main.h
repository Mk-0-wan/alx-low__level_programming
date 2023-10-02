#ifndef _FILE_IO_
#define _FILE_IO_
/* Header files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/* Custom function pointers */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
