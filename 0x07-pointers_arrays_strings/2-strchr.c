#include "main.h"

/**
 * _strchr - to locates character in a string
 * @s: parameter s
 * @c: parameter c
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

