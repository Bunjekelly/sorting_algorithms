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
	int temp;

	for (k = 0; k <= size; k++)
	{
		if (array[k + 1])
		{
			for (i = 0; i <= size; i++)
			{
				if (array[i + 1])
				{
					if (array[i] > array[i + 1])
					{
						temp = array[i];
						array[i] = array[i + 1];
						array[i + 1] = temp;
						print_array(array, size);
					}
				}
			}
		}
	}	
}
