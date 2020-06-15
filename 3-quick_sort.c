#include "sort.h"
/**
 * swap - function to swap two ints
 * @a: first int
 * @b: second int
 *
 * Return: Void
 */

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/**
 *partition_quick_sort-partition the array
 *
 *@a: tha array
 *@l: low index
 *@h: high index
 *@s: size of the array
 *
 *Return: index of partition
 */
int partition_quick_sort(int *a, int l, int h, size_t s)
{
	int pivot = a[h];
	int i = (l - 1), j;

	for (j = l; j <= h; j++)
	{
		if (a[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&a[i], &a[j]);
				print_array(a, s);
			}
		}
	}
	return (i);
}

/**
 *algo_quicksort- quick sorting
 *@a: the array
 *@l: low index
 *@h: high index
 *@s: size of the array
 *
 *
 */
void algo_quicksort(int *a, int l, int h, size_t s)
{
	int p;

	if (l < h)
	{
		p = partition_quick_sort(a, l, h, s);
		algo_quicksort(a, l, p - 1, s);
		algo_quicksort(a, p + 1, h, s);
	}

}
/**
 *quick_sort-function that sorts an array of integers
 *in ascending order using the Quick sort algorithm
 *
 *@array: array sorted
 *@size: size of arraay
 *
 *Return: void
 */
void quick_sort(int *array, size_t size)
{


	if (size < 2)
		return;

	algo_quicksort(array, 0, size - 1, size);
}
