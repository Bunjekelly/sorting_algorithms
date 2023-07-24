#include "sort.h"

void _sort(int arr[], int low, int high, size_t size);
void _swap(int *a, int *b);
int partition(int arr[], int low, int high, size_t size);


/**
 * _swap - swaps two elements in addresses
 * @a: address of a
 * @b: address of b
 */
void _swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - divides the array into two parts
 * @arr: the array
 * @high: index of higher bound
 * @low: index of lower bound
 * @size: size of array
 *
 * Return: Index of partition
 */

int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			_swap(&arr[i], &arr[j]);
			if (&arr[i] != &arr[j])
				print_array(arr, size);

		}
	}
	_swap(&arr[i + 1], &arr[high]);
	if (&arr[i + 1] != &arr[high])
		print_array(arr, size);

	return (i + 1);
}

/**
 * _sort - sorts using quick sort algo
 * @arr: the array
 * @low: index of lower bound
 * @high: index of higher bound
 * @size: size of the array
 *
 * Return: void
 */

void _sort(int arr[], int low, int high, size_t size)
{
	int s;

	if (low >= high)
		return;
	s = partition(arr, low, high, size);
	_sort(arr, low, s - 1, size);
	_sort(arr, s + 1, high, size);
}

/**
 * quick_sort - a function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	_sort(array, 0, size - 1, size);
}
