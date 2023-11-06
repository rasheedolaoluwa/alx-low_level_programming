#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: This structure stores the age, name, and the name of the dog's owner.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

#endif /* DOG_H */
