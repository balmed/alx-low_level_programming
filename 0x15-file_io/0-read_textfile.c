#include "main.h"
/**
 * read_textfile - reads a text file and prints it to  std output.
 * @filename: Name of file.
 * @letters: numbre letters to read .
 *
 * Return: numbre of letters read-printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *array;
	ssize_t fd;
	ssize_t wrt;
	ssize_t rd;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	array = malloc(sizeof(char) * letters);
	rd = read(fd, array, letters);
	wrt = write(STDOUT_FILENO, array, rd);
	free(array);
	close(fd);
	return (wrt);
}

