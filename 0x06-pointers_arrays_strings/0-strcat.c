/**
 * _strcat - concatenat a string
 * @dest : a pointer to the string to concatenate
 * @src : a pointer to the string to be concatenated to first string
 * Return: string concatenated
 */
char *_strcat(char *dest, char *src)
{
int i = 0
int j = 0;
int len1 = 0;
int len2 = 0;
char strcat[200];
while (s1[i] != '\0')
{
len1++;
i++;
}
while (s2[j] != '\0')
{
len2++;
j++;
}
for (i = 0 ; i < (len1 + len2) ; i++)
{
if (i < len1)
{
strcat[i] = dest[i];
}
else
{
strcat[i] = src[i - (len1)];
}
}
strcat[len1 + len2] = '\0';
return (strcat);
}
