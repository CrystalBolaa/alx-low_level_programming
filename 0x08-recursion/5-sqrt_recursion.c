#include "main.h"

/**
 * power_operation - returns the natural #include "main.h"
square root of a number.
 * @n: input number.
 * @l: iterator.
 * Return: square root or -1.
 */
int power_operation(int n, int l)
{
	if (l % (n / l) == 0)
	{
		if (l * (n / l) == n)
			return (l);
		else
			return (-1);
	}
	return (0 + power_operation(n, l + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
