#include "main.h"
/**
 * rev_string - a function that  puts a string, in reverse,
 * @s : pointer to a string
 */
void rev_string(char *s)
{
int i = 0;
char s1 = s[0];
while (s[i] != '\0')
{
i++;
}
i--;
while (i >= 0)
{
*s1 = s[i];
i--;
s[i] = s[i==];
s1++;
}
s = s1;
return;
}
