#include "main.h"

/**
* puts_half - Prints the second half of a null-terminated string,
*             followed by a new line
* @str: pointer to the string to be printed
*/
void puts_half(char *str)
{
int length = 0;
char *p = str;

/* Find the length of the string */
while (*p)
{
length++;
p++;
}

/* Print the second half of the string */
p = str + length / 2 + length % 2;
while (*p)
_putchar(*p++);
_putchar('\n');
}
