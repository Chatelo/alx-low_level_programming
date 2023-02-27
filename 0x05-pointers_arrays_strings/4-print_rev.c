#include "main.h"
/**
* print_rev - prints a string in reverse, followed by a new line
* @s: string to print in reverse
*/
void print_rev(char *s)
{
int i;

/* find the length of the string */
for (i = 0; s[i] != '\0'; i++)
;

/* print the string in reverse */
for (i--; i >= 0; i--)
_putchar(s[i]);

/* print a new line */
_putchar('\n');
}
