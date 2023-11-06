#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - main structure
* @d: main structure pointer
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
