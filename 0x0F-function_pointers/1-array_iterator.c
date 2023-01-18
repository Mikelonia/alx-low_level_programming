#include "function_pointers.h"
/**
 * array_iterator - ...
 * @array: ...
 * @size: .the size
 * @action: ..Do the task assigned
 * Return: 0 if no error
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
