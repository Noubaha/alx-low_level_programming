#include "main.h"

/**
 * binary_to_uint - converts a binary
 * @b: pointer char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int a, valeur = 0;

if (!b)
    return 0;

for (int i = 0; b[i] != '\0'; i++) {
    if (b[i] != '0' && b[i] != '1')
        return 0;
    
    valeur = valeur << 1;
    if (b[i] == '1')
        valeur |= 1;
}

return valeur;
}
