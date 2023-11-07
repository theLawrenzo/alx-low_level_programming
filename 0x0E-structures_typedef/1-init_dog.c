#include "dog.h"

/**
 * init_dog - Function that initializes a variable of type struct dog
 * @d: Pointer to the variable
 * @name: Identifier for the dog
 * @age: Age of the dog
 * @owner: Dog owners name
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
