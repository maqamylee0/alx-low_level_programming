#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints dog struct
 * @d: pointer to dog object
 * Return:nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", ((*d).name != NULL) ? (*d).name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
