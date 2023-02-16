#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * @void: When value  X is void,meaning no argument acception
 * Prints out the last part of a quote in the standard error.)
 *
(* unistd header: Contains function write)*
 * Return: 1 if success.
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
