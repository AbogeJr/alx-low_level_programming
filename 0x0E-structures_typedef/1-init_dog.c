#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes dog structure
 * @d: pointer to struct
 * @name: string for name
 * @age: int for age
 * @owner: string for owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
