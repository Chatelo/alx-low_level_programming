#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given indexe.
 * @n: pointer to an unsigned long integer..
 * @index: the index, starting from 0, of the bit to set to zero
 *
 * Return: 1 if it worked, -1 if an error occurred...
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n &= ~(1UL << index);

return (1);
}