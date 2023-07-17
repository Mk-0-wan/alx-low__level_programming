#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data types for class dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * 
 * Description: a data type about a dog and an owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
