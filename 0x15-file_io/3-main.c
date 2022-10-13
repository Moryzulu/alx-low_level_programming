#include "main.h"

/**
  * create_file - ...
  * @filename: ...
  * @text_content: ...
  *
  * Return: ...
  */
int create_file(const char *filename, char *text_content)
{
	int holder;

	if (!filename)
		return (-1);

	holder = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (holder == -1)
		return (-1);

	if (text_content)
		write(holder, text_content, _strlen(text_content));

	close(holder);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
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
