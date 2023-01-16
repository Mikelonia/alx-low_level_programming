#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - ... free the memory
 * @d: ...the variable d
 * Return: ...0 if no error
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
