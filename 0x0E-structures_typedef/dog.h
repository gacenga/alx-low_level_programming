#ifndef MYHEADER_H
#define MYHEADER_H
/**
* struct dog - dogs information
* @name:the name of dog
* @age:age of the dog
* @owner:owner of the dog
* Description:long
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* dog_t - typedef for struct doh
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
