#include "main.h"
/**
 * _isalpha - function that prints lower case and upper case
 *
 * @c: parameter to e checked
 *
 * Return: 1 if it is an aplhabet
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
