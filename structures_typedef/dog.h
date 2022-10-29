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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
