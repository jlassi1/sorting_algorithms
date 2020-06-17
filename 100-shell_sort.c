#include"sort.h"

/**
 * shell_sort - sorts an arry in a shell algorithm
 * @array: an array
 * @size: its size
 *
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
size_t gap = 1;
size_t i, j;

if (size < 2)
	return;
while (gap < size / 3)
{
	gap = gap * 3 + 1;
}
while (gap > 0)
{
	for (i = 0; i < size - 1; i++)
	{
		for (j = i; j < size; j += gap)
		{
			if (array[i] > array[j])
				swap(&array[i], &array[j]);
		}
	}
	print_array(array, size);
	gap = (gap - 1) / 3;
}
for (i = 0; i < size - 1; i++)
{
	if (array[i + 1] < array[i])
	{
		swap(&array[i], &array[i + 1]);
		for (j =  i; j > 0; j--)
		{
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
		}
	}
}
}

