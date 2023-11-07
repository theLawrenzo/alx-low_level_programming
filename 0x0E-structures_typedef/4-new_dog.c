#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - Function that returns the length of a string
 * @str: String to return its length
 *
 * Return: len
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strdup - Function that create a block of memory and copies a string
 * to that block and returns its address
 * @s: String to be copied
 *
 * Return: str
 */
char *_strdup(char *s)
{
	int len, i;
	char *str;

	if (s == NULL)
		return (NULL);

	len = _strlen(s);
	i = 0;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}

	*(str + i) = '\0';

	return (str);
}

/**
 * new_dog - Function that creates a new dog
 * @name: An identifier for the dog
 * @age: The age of the dog
 * @owner: Owners name of the dog
 *
 * Return: A pointer to the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = (dog_t *)malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = _strdup(name);
	new_d->age = age;
	new_d->owner = _strdup(owner);

	return (new_d);
}
