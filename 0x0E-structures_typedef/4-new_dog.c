#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	return (NULL);

	new_dog->name = name ? strdup(name) : NULL;
	if (name && !new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = owner ? strdup(owner) : NULL;
	if (owner && !new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
