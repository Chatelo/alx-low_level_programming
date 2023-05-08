#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - function that will create file.
 * @filename: name of the file to be created
 * @text_content: string used write to into the file
 *
 * Return: 1 on success, -1 on an event of failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, size;

if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (!text_content)
{
close(fd);
return (1);
}
size = write(fd, text_content, _strlen(text_content));
close(fd);
if (size == -1)
return (-1);
return (1);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string to check
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
int len = 0;

while (s[len])
len++;
return (len);
}
