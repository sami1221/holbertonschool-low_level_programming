#ifndef dog_h
#define dog_h

/**
 * struct dog - Dogs structure
 * @name: Dogs name
 * @age: Dogs age
 * @owner: Dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
