#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to be swaped.
 * @b: The second integer to be swaped.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @a: An array of integers to sort.
 * @s: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = s;
	bool bubbly = false;

	if (array == NULL || s < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap_ints(a + i, a + i + 1);
				print_array(a, s);
				bubbly = false;
			}
		}
		len--;
	}
}
