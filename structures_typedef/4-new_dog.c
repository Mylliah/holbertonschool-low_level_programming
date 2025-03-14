#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - function that copies the string
 * @dest: destination of copy
 * @src: source of copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc((len1 + 1) * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	_strcpy(doggy->name, name);

	doggy->age = age;

	doggy->owner = malloc((len2 + 1) * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	_strcpy(doggy->owner, owner);

	return (doggy);
}
