#ifndef __MAIN_H__
#define __MAIN_H__

/**
 * struct dog - attributes of a dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: years of dog existence
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

/**
 * dog_t - Typedef for dog structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
