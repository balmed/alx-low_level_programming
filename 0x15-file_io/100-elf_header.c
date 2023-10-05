#include "main.h"
#include <elf.h>
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * main - program.
 * @ac: paramitre count.
 * @av: paramitre vector.
 *
 * Return: 1 on success 0 on failure.
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr *h;
	ssize_t b;

	if (ac != 2)
		dprintf(STDERR_FILENO, "elf_header elf_filename\n"), exit(98);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]), exit(98);
	b = read(fd, &h, sizeof(Elf64_Ehdr));
	if (b < 1 || b != sizeof(Elf64_Ehdr))
		dprintf(STDERR_FILENO, "Error: Can't read form file %s\n", av[1]), exit(98);
	if (h->e_ident[0] != 0x7f && h->e_ident[1] != 'E' && h->e_ident[2] != 'L' &&
			h->e_ident[3] != 'F')
	{
		printf("ELF Header: \n");
	}
	else
	dprintf(STDERR_FILENO, "Error: Can't ELF file %s\n", av[1]), exit(98);
	print_magic(h->e_ident);
	print_class(h->e_ident);

	if (close(fd))
		dprintf(STDERR_FILENO, "Error: Closeing file %d\n", fd), exit(98);
	return (EXIT_SUCCESS);
}
