#include "main.h"

/**
 * binary_to_uint - converts a binary
 * @b: pointer char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int a, v = 0;

if (!b)
    return 0;

for (int i = 0; b[i] != '\0'; i++) {
    if (b[i] != '0' && b[i] != '1')
        return 0;
    
    v = v << 1;
    if (b[i] == '1')
        v |= 1;
}

return v;
}
