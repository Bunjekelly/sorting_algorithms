#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - This is a function that sorts an array of integers
 * in ascending order
 * @array: This is the array of elements
 * @size: The size of the elements
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int temp = 0;

	if (array == NULL || size == 0)
		return;

	for (k = 0; k < size - 1; k++)
	{
		for (i = 0; i < size - k - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}
