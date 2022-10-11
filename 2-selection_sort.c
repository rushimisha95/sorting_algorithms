#include "sort.h"

/**
* selection_sort -  sorts an array of integers in ascending
* @array: list
* @size: array
**/

void selection_sort(int *array, size_t size)
{
	unsigned int j, k;
	int aux_1;

	for (j = 0; j < size - 1; j++)
	{
		unsigned int aux_2 = j;

		for (k = j + 1; k < size; k++)
		{
			if (array[k] < array[aux_2])
			{
				aux_2 = k;
			}
		}

		if (aux_2 != j)
		{
			aux_1 = array[j];
			array[j] = array[aux_2];
			array[aux_2] = aux_1;
			print_array(array, size);
		}
	}
}
