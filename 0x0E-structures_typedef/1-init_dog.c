#include "dog.h"
/**
 * init_dog - initialises dog
 * @d: pointer to dog object
 * @name: name to assign
 * @age: age to assign
 * @owner: owner to assign
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
