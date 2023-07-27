/**
 * _strncat - concatenat a string
 * @dest : a pointer to the string to concatenate
 * @src : a pointer to the string to be concatenated to first string
 * @n : number of bytes to concatenate from src
 * Return: string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int len1 = 0;
int len2 = 0;
while (dest[i] != '\0')
{
len1++;
i++;
}
for (i = len1 ; i < (len1 + n) && src[i - len1] != '\0' ; i++)
{
dest[i] = src[i - (len1)];
}
dest[len1 + len2] = '\0';
return (dest);
}
