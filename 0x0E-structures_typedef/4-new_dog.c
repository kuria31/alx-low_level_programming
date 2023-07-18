#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner = strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
