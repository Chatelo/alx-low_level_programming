#include "main.h"
#include "main.h"
/**
 * _isalpha - tests whether a character is a
 * alphabetic character.
 * @c: character to test.
 * Return: 1 if it is a alphabetic character...
 * 0 if it is not a alphabetic character.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
