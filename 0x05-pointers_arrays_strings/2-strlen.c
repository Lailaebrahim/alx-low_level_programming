/**
 * _strlen - a function that returns the length of a string.
 * @s : pointer to a string
 * Return:int length of string
 */
int _strlen(char *s)
{
int len, i = 0;)
while (s[i] != '\0')
{
len++;
i++;
}
return (len);
}
