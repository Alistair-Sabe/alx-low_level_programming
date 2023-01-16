#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Decription: Struct for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
 typedef struct dog dog_t;
 void init_dog(struct dog *d, char *name, folat age, char *owner);
 void init_dog(struct dog *d);
 dog_t *new_dog(char *name, float age, char *owner);
 void free_dog(dog_t *d);

#endif