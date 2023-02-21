#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
* @void: When parameter X is void, it means it is not acceptions any arg
* Description: Write a function that prints 10 times the alphabet
* in lowercase, followed by a new line.
** main.h header: contains prototypes of all your functions
* and the prototype of the function _putchar)*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
/*Declaration*/
int i;

/*for loop*/
for (i = 0; i < 10; i++)
{
/*Declaration*/
char c;

/*for loop*/
for (c = 'a'; c <= 'z'; c++)
{
/*prints alphabetical letters*/
_putchar(c);
}
/*prints new line*/
_putchar('\n');
}
}
