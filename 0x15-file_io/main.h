#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void print_magic(Elf64_Ehdr h);
void print_class(Elf64_Ehdr h);
void print_data(Elf64_Ehdr h);
void print_version(Elf64_Ehdr h);
void print_abi(Elf64_Ehdr h);
void print_osabi(Elf64_Ehdr h);
void print_type(Elf64_Ehdr h);

#endif /* MAIN_H */
