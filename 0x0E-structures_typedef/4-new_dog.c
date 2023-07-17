#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - gets length of string
 * @str: string
 *
 * Return: str
 */

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * *_strcopy - returns dest with a copy from src
 * @src: source
 * @dest: destination
 *
 * Return: destination
 */

char *_strcopy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name's dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct pointer dog, NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

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

	dog->name = strcopy(dog->name, name);
	dog->age = age;
	dog->owner = strcopy(dog->owner, owner);

	return (dog);
}
