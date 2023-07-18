#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: name
 * @age: age
 * @owner: the owner
 * Description: the structure reperesents a dogs name,
 * its age and the owners information
 */
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
