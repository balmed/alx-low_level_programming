#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define READ_BUF_SIZE 1024
/**
 * main - program.
 * @ac: paramitre count.
 * @av: paramitre vector.
 *
 * Return: 1 on success 0 on failure.
 */
int main(int ac, char **av)
{
	int file_from = 0, file_to = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file_to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to%s\n", av[2]), exit(99);
	while ((b = read(file_from, buf, READ_BUF_SIZE)) > 0)
		if (write(file_to, buf, b) != b)
			dprintf(STDERR_FILENO, "Error: Can't write to%s\n", av[2]), exit(99);
	if (b == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", av[1]), exit(98);
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n",
			file_from), exit(100);
	if (file_to)
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n",
				file_from), exit(100);
	return (EXIT_SUCCESS);
}
