#include "main.h"

/**
 * _strpbrk - searching a string for any of a set of bytes
 * @s: parameter s
 * @accept: parameter accept
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

