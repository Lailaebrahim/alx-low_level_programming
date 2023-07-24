/**
 * swap_int - a function swaps the values of two integers.
 * @a : pointer to int type variable
 * @b : pointer to int type variable
 */
void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
return;
}
