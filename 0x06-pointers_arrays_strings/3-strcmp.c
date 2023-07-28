/**
 * _strcmp - compare two strings
 * @dest : a pointer to the first string 
 * @src : a pointer to the string to be compared to first string 
 * Return: 0 if they are similar
 * negative value if s1 < s2
 * positive value if s1 > s2
 * this value corresponds to the difference between ascii code
 * of the first different charcter between two strings
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int ret = 0;
while (s1[i] != '\0')
{
i++;
if (s1[i] != s2[i])
{
ret = s1[i] - s2[i];
break;
}
else if (s1[i] == s2[i])
{
ret = 0;
}
else
{
   /*nothing*/
}
}
return (ret);
}
