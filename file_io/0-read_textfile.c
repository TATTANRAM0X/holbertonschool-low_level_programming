#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer that points to the file to read and write
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * or 0 if error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num_bytes, write_result;

	if (!filename)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num_bytes = read(fd, buffer, letters);
	if (num_bytes == -1)
		return (0);

	write_result = write(STDOUT_FILENO, buffer, num_bytes);
	if (write_result == -1)
		return (0);

	close(fd);
	free(buffer);

	return (write_result);
}

