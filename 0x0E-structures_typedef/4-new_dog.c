#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - main structure
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/


dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    if (!name || age < 0 || !owner)
	{
        return (NULL);
    }

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
