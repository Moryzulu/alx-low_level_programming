#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * read_textfile - ...
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int holder, reader;
	char *temp_buff = malloc(sizeof(char *) * letters);

	if (!temp_buff)
		return (0);

	if (!filename)
		return (0);

	holder = open(filename, O_RDONLY, 0600);
	if (holder == -1)
		return (0);

	reader = read(holder, temp_buff, letters);
	write(STDOUT_FILENO, temp_buff, reader);

	free(temp_buff);
	close(holder);
	return (reader);
}
