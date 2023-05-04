#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip to get.
 * one num to another
 * @n: first num
 * @m: second num
 * Return: number of bits that will  flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int count = 0;

while (xor)
{
count += xor & 1;
xor >>= 1;
}

return (count);
}
