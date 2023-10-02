#include "main.h"
#include <string.h>
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
	int form_fd = 0, to_fd = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	form_fd = open(av[1], O_RDONLY);
	if (form_fd == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to%s\n", av[2]), exit(99);
	while ((b = read(form_fd, buf, READ_BUF_SIZE)) > 0)
		if (write(to_fd, buf, b) != b)
			dprintf(STDERR_FILENO, "Error: Can't write to%s\n", av[2]), exit(99);
	if (b == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", av[1]), exit(98);
	form_fd = close(form_fd);
	to_fd = close(to_fd);
	if (form_fd)
	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n",
			form_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n",
				form_fd), exit(100);
	return (EXIT_SUCCESS);
}
