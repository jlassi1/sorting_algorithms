#include "sort.h"
/**
 *selection_sort-function that sorts an array of integers
 *in ascending order using the Selection sort algorithm
 *
 *@array: array sorted
 *@size: size of array
 *
 */
void selection_sort(int *array, size_t size)
{

size_t x, j, i;
int y;

if (size < 2)
	return;

for (i = 0; i < size - 1; i++)
{
	x = i;
	j = i + 1;


	while (j < size)
	{
		if (array[j] <= array[x])
		{
			x = j;

		}
		j++;
	}
	if (x != i)
	{
		y = array[i];
		array[i] = array[x];
		array[x] = y;
		print_array(array, size);
	}

}

}
