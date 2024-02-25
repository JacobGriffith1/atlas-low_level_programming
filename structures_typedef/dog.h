#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog;

/**
 * struct dog - Brief dog attributes.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Description: struct 'dog' stores the name, age, and owner of dog(s).
 */

struct dog {
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
