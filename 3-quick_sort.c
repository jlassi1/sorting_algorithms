#include "sort.h"
/**
 *
 *
 *
 *
 *
 *
 *
 */
void quick_sort(int *array, size_t size)
{
    int  y;
    size_t j, i;

    i = 0;


        for (j = 0; j < size ; j++,i++)
        {

            if (array[j] > array[size - i - 1])
            {
                y = array[j];
                array[j] = array[size - i - 1];

                array[size - i - 1] = y;
                
                print_array(array, size);
            }
            
        }
}