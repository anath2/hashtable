#include <stdlib.h>
#include <stdio.h>

/* Define a generic type that allows us to store any value inside the
hashtable  */
typedef void *any_t;


/* Define a bucket */
typedef struct _hashmap_elem{
  int key;
  any_t data;
  int in_use
} hashmap_elem ;
