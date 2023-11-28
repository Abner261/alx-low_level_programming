#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - A function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: The pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *n, *o;
	int name_len = strlen(name), owner_len = strlen(owner), i;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
	{
		return (0);
	}
	n = malloc(sizeof(char) * (name_len + 1));
	if (!n)
	{
		free(n);
		free(ptr);
		return (0);
	}
	o = malloc(sizeof(char) * (owner_len + 1));
	if (!o)
	{
		free(ptr);
		free(o);
		free(n);
		return (0);
	}
	for (i = 0; i < name_len; i++)
	{
		n[i] = name[i];
	}
	n[i] = '\0';
	for (i = 0; i < owner_len; i++)
	{
		o[i] = owner[i];
	}
	o[i] = '\0';
	ptr->name = n;
	ptr->age = age;
	ptr->owner = o;
	return (ptr);
}
