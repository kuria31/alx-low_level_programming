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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
