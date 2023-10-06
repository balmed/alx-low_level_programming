#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @h: the struct ELF header.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(Elf64_Ehdr h)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", h.e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @h: the struct ELF header.
 */
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");

	switch (h.e_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", h.e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @h: the struct ELF header.
 */
void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");

	switch (h.e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", h.e_ident[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version of an ELF header.
 * @h: the struct ELF header.
 */
void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d",
	       h.e_ident[EI_VERSION]);

	switch (h.e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @h: the struct ELF header.
 */
void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");

	switch (h.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", h.e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @h: the struct ELF header.
 */
void print_abi(Elf64_Ehdr h)
{
	printf("ABI Version:%d\n", h.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @h: the struct ELF header.
 */
void print_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int i = 0;

	if (h.e_ident[EI_DATA] == ELFDATA2MSB)

	printf("  Type:                              ");

	switch (p[i])
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", p[i]);
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
	Elf64_Ehdr h;
	ssize_t bt;

	if (ac != 2)
		dprintf(STDERR_FILENO, "elf_header elf_filename\n"), exit(98);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]), exit(98);
	bt = read(fd, &h, sizeof(h));
	if (bt < 1 || bt != sizeof(h))
		dprintf(STDERR_FILENO, "Error: Can't read form file %s\n", av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
	{
		printf("ELF Header: \n");
	}
	else
		dprintf(STDERR_FILENO, "Error: Can't ELF file %s\n", av[1]), exit(98);
	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_abi(h);
	print_osabi(h);
	print_type(h);

	if (close(fd))
		dprintf(STDERR_FILENO, "Error: Closeing file %d\n", fd), exit(98);
	return (EXIT_SUCCESS);
}
