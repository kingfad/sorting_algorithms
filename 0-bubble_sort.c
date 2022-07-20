#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temp = 0;

	if (!array || size <= 1)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
