#include "dog.h"

/**
 * inti_dog - Function that initializes a variable of type struct
 * dog
 * @d: Pointer to the structure dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog doo;

	d = &doo;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
