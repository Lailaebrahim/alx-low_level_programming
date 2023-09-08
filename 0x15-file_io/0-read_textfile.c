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
ssize_t rd, wt;
buffer = malloc(sizeof(size_t) * letters);
if (filename == NULL || buffer == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}
rd = read(fd, buffer, letters);
if (rd == -1)
{
free(buffer);
close(fd);
return (0);
}
close(fd);
wt = write(STDOUT_FILENO, buffer, letters);
if (wt == -1)
{
free(buffer);
return (0);
}
if (wt != rd)
{
return (0);
}
return (wt);
}
