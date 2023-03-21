#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free dog from memory
 * @hobbes: dog object
 * Return: nothing
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner != NULL)
		free(hobbes->owner);
	if (d->name != NULL)
		free(hobbes->name);

	free(d);
}
