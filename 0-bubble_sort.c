#include "sort.h"
/**
 *bubble_sort - Array of integers in ascending order
 *@array: Pointer
 *@size: array
 *Return: array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, k;
	int counter;

if  (size < 2)
return;
if  (array == NULL)
return;
	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				counter = array[k];
				array[k] = array[k + 1];
				array[k + 1] = counter;
				print_array(array, size);
			}
		}
	}
}
