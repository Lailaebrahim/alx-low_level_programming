/**
 * _strncpy - concatenat a string
 * @dest : a pointer to the string to concatenate
 * @src : a pointer to the string to be concatenated to first string
 * @n : number of bytes to concatenate from src
 * Return: string concatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && dest[i] != '\0' && src[i] != '\0')
{
  dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
