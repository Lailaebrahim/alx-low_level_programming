#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: type char filename pointer of FD
 * @text_content: type char pointer of char
 * Return: -1 if NULL in FN, 1 on sucess
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int len = 0, ret = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (*(text_content + len) != '\0')
len++;
ret = write(fd, text_content, len);
}
if (ret != -1 || ret != len)
return (-1);
return (1);
}
