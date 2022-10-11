#include "sort.h"
/**
 * shell_sort - function that sorts Knuth sequence
 * @array: array
 * @size: size array
 */
void shell_sort(int *array, size_t size)
{
	size_t j, k, aux_1 = 1;
	int aux_2_int;

	if (array == NULL || size < 2)
		return;

	while (aux_1 < size / 3)
		aux_1 = aux_1 * 3 + 1;

	while (aux_1 > 0)
	{
		for (j = aux_1; j < size; j++)
		{
			aux_2_int = array[j];
			for (k = j; k >= aux_1 && array[k - aux_1] > aux_2_int; k = k - aux_1)
				array[k] = array[k - aux_1];
			array[k] = aux_2_int;
		}
		aux_1 = (aux_1 - 1) / 3;
		print_array(array, size);
	}
}
