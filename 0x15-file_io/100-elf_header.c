#include "main.h"
#include <stdio.h>

/**
 * get_type - determine file type
 * @_ehdr: pointer to ELF header struct
 */
void get_type(Elf64_Ehdr *_ehdr)
{
printf("%-35s", "Type:");
switch (_ehdr->e_type)
{
case ET_NONE:
printf("NONE (Unknown type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
break;
}
}
/**
 * main - entry point for program to get header of ELF file
 * @argc: arg of count
 * @argv: arg of array
 *
 * Return: 1 on success, error code on failure
 */
int main(int argc, char *argv[])
{
printf("argc:%d, argv:%p\n", argc, (void *)*argv);
return (1);
}
