#include <stdio.h>
#include "dog.h"
/**
 * init_dog - variable of type
 * @name: name
 * @owner: owner
 * @age: age
 * @d: out
*/
void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
else
return;
}
