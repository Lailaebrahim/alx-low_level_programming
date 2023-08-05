/**
 * main - entry point
 * @argc : vumber of arguments
 * @argv : 1-d array
 * Return: 0 always succes
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc ; i++)
printf("%s\n", argv[i]);
return (0);
}
