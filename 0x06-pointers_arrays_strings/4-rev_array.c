#include "main.h"

/**
 * reverse_array - reversing the content of an array of integers
 * @a: parameter a
 * @n: parameter n
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

