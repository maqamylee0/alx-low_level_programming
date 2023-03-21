#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates dog object
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog object, NULL if fails
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *y;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	y = malloc(sizeof(dog_t));

	if (y == NULL)
		return (NULL);

	(*y).name = malloc(sizeof(char) * (strlen(name) + 1));

	if ((*y).name == NULL)
	{
		free(y);
		return (NULL);
	}
	(*y).owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*y).owner == NULL)
	{
		free(y->name);
		free(y);
		return (NULL);
	}

	(*y).name = strcpy(y->name, name);
	(*y).age = age;
	(*y).owner = strcpy(y->owner, owner);

	return (y);
}
