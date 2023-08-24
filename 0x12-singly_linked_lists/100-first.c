#include <stdio.h>

void printBeforeMain(void) __attribute__((constructor));

/**
 * printBeforeMain - Prints a message before the
 *                   main function is executed.
 *
 * Description: This function is a constructor function
 *              with the `constructor` attribute.
 *              It will be executed automatically before
 *              the `main` function is called.
 *              It prints a message indicating that
 *              it is printing before `main`.
 */
void printBeforeMain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
