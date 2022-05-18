#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct for properties of a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char  *owner;
};
/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
void free_dog(dog_t *);
dog_t *new_dog(char *, float, char *);
char *strcopy(char *src);

#endif
