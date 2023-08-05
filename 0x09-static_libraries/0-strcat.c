/**
 * _strcat - concatenat a string
 * @dest : a pointer to the string to concatenate
 * @src : a pointer to the string to be concatenated to first string
 * Return: string concatenated
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
int len1 = 0;
int len2 = 0;
while (dest[i] != '\0')
{
len1++;
i++;
}
while (src[j] != '\0')
{
len2++;
j++;
}
for (i = len1 ; i < (len1 + len2) ; i++)
{
dest[i] = src[i - (len1)];
}
dest[len1 + len2] = '\0';
return (dest);
}
