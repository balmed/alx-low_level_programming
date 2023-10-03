#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the string 
 *
 * Return: return int.
 */
int _strlen(char *s)
{
	int i = 0;
	
	if(!s)
		return(0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: text to write.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t let = 0;
	ssize_t len;
       	
	len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (len)
		let = write(fd, text_content, len);
	close(fd);
	return (let == len ? 1 : -1);
}
