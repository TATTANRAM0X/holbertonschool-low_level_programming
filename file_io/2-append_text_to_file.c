#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file were we will append a text
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_result;
	int i = 0;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		fd = open(filename, O_WRONLY);
		if (fd == -1)
			return (-1);
		else
			return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	write_result = write(fd, text_content, i);
	if (write_result == -1)
		return (-1);

	close(fd);

	return (1);
}

