#include "dog.h"
/**
 * init_dog - intialization of the dog variable
 * @d: the d dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void datatype
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
