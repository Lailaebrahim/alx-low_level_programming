#include "main.h"
/**
 * append_text_to_file - Function that creates a file
 * @filename: type char filename pointer of FD
 * @text_content: type char pointer of char
 * Return: -1 if NULL in FN, 1 on sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, ret, len = 0;
if (filename == NULL || text_content == NULL)
return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);
while (*(text_content + len) != '\0')
len++;
ret = write(fd, text_content, len);
if (ret == -1)
return (-1);
return (1);
}
