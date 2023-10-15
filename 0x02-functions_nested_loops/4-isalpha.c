#include "main.h"


/**
 * _isalpha - checks if a character is alphabetic
 *
 * @x: the character to be checked
 *
 * Return: 1 for alphabetic character or 0 if it isn't
 */

int _isalpha(int x)
{
return ((x >= 97 && x <= 122) || (x >= 65 && x <= 90));
}
