#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates new instance of a dog struct
 * @name: name of dog
 * @age: Age of dog
 * @owner: Name of owner
 *
 * Return: Pointer to instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;
	char *lname, *lowner;

	if (name == NULL || owner == NULL)
		return (NULL);

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);

	lname = strcopy(name);
	if (lname == NULL)
	{
		free(pup);
		return (NULL);
	}
	
	lowner = strcopy(owner);
	if (lowner == NULL)
	{
		free(pup);
		return (NULL);
	}

	pup->name = lname;
	pup->age = age;
	pup->owner = lowner;
	return (pup);
}

/**
 * strcopy - A function that copies a string to a dynamically allocated memory
 * @src: String to copy
 *
 * Return: Pointer to copy of string
 */
char *strcopy(char *src)
{
	char *buff;
	int i, strlength;

	if (src == NULL)
		return (NULL);

	strlength = 0;
	while (src[strlength] != '\0')
		strlength++;

	buff = malloc(sizeof(char) * (strlength + 1));
	if (buff == NULL)
		return (NULL);

	i = 0;
	while (src[i] != '\0')
	{
		buff[i] = src[i];
		i++;
	}

	buff[i] = '\0';
	return (buff);
}
