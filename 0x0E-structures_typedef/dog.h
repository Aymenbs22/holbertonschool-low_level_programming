#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @name: name
 * @owner: owner
 * @age: age
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog dog_t;
#endif
