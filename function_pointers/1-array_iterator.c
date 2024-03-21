#include "function_pointers.h"

/*
 * array_iterator - Applies a function to each element of an array.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function to be applied to each element.
 *
 * This function iterates over each element of the array pointed to by @array
 * and applies the function specified by @action to each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    for (i= 0; i < size; i++)
    {
        action(array[i]);
    }
}

