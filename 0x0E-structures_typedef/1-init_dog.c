#include "dg.h"
#include <stdlib.h>

/**
 * int_dog - Init a variable of type struct
 * @d: Dog to be initialised
 * @name: name of the dog
 * @age: age of the do
 * @owner: ower of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
