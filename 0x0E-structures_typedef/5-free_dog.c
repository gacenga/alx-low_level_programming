#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees dogs
*
* @d:input
* Returns:void
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
