#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: number to get bit from....
 * @index: index of the bit to get....
 *
 * Return: value of the bit at index index or -1 if an error occurred...
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(n) * 8 - 1))
return (-1);

return ((n >> index) & 1);
}