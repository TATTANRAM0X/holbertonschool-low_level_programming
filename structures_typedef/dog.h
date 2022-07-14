#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct for Poppy
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: struct that describe some characteristics of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


#endif /* MAIN_H */
