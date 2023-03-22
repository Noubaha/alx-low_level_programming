#include "main.h"

/**
 * _islower function checks if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int caracter)
{
	if (caracter >= 'a' && caracter <= 'z')
		return (1);
	else
		return (0);
}

