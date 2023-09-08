#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: type char filename
 * @letters: type size_t letters
 * Return: if cannot be oppened or read 0, if is NULL 0, if writes fail 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
size_t ret;
buffer = malloc(sizeof(size_t) * letters);
if (filename == NULL || buffer == NULL)
return (0);
fd = open(filename, _RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}
ret = read(fd, buffer, letters);
if (ret == 0 || ret == -1)
{
free(buffer);
close(fd);
return (0);
}
ret = write(fd, buffer, letters);
if (ret == 0 || ret == -1 || ret != letters)
{
free(buffer);
close(fd);
return (0);
}
return (ret);
}
