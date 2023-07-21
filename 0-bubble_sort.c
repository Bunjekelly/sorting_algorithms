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
	int temp, flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (k = 0; k < size - 1 - i; k++)
		{
			if (array[i] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
