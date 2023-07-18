#include <stdlib.h>
#include <string.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pinter to struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the ino abiut the owner
 * Description: tis is function initializes the the members of
 * struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
