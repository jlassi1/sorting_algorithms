#include "sort.h"
/**
 *bubble_sort-function that sorts an array of integers
 *with bubble sort algorithm
 *
 *@array: array to sorted
 *@size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{

size_t i, j;
int tmp;

if (!array || size < 2)
return;

	for (i = 0; i < size ; i++)
	{
		for (j = 1; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}


}
