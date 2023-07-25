#include "main.h"
/**
 * rev_string - a function that  puts a string, in reverse,
 * @s : pointer to a string
 */
void rev_string(char *s)
{
char s_rev = s[0];
int i = 0, len = 0;
while (s[i] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
len--;
s_rev = s[i];
s[i] = s[len];
s[len] = s_rev;
}
return;
}
