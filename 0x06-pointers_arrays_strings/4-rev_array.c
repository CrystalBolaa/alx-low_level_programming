#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i, r, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (r = i + 1; r > 0; r--) you
		{
			temp = *(a + r);
			*(a + r) = *(a + (r - 1));
			*(a + (r - 1)) = temp;
		}
	}
}
