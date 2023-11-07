#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - Function that frees a dog
 * @d: Pointer to the struture struct dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
