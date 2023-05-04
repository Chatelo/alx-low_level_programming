#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0(zero) at a given index
 * @n: pointer to an unsigned long integer
 * @index: the index, starting from 0 (zero), of the bit to set to 0
 *
 * Return: 1 if it work, -1 if an error occur
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n &= ~(1UL << index);

return (1);
}
