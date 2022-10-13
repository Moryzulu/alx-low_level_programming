#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file - ...
  * @filename: ...
  * @text_content: ...
  *
  * Return: ...
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int holder;

	if (!filename)
		return (-1);

	holder = open(filename, O_WRONLY | O_APPEND);
	if (holder == -1)
		return (-1);

	if (text_content)
	{
		if (write(holder, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(holder);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @str: String to count
  *
  * Return: String length
  */
int _strlen(char *str)
{
	int count = 0;

	while (str[count])
		count++;

	return (count);
}
