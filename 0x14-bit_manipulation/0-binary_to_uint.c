#include "main.h"

/**
 * binary_to_uint - converts a binary
 * @b: pointer char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int a, COOL = 0;

if (!b)
return (0);
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
return (0);
if (b[a] == '1')
COOL = COOL * 2 + 1;
else
COOL = COOL * 2 + 0;
}
return (COOL);
}
