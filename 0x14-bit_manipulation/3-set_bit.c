#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to an unsigned long integer
 * @index: index of the bit to set, starting from 0(zero)
 *
 * Return: 1 if it work, or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n = *n | (1 << index);
return (1);
}
