#include "main.h"

/**
* rev_string - Reverses a null-terminated string in-place
* @s: pointer to the string to be reversed
*/
void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;

/* Find the end of the string */
while (*end)
end++;
end--;  /* Decrement to point to the last character */

/* Reverse the string by swapping the characters at the start and end */
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;

start++;
end--;
}
}
