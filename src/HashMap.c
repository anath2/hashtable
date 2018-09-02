#include <stdlib.h>
#include <stdio.h>

/* Define a generic type that allows us to store any value inside the
hashtable  */

typedef void *any_t;

typedef any_t map_t

/* Define a bucket */

/*
  key: Hashing key
  data: Value associated with the key
  in_use: Whether the bucket is in use or not
*/

typedef struct _hashmap_elem{
  int key;
  any_t data;
  int in_use
} hashmap_elem ;


/*Define Hashmap*/

/*
  max_size: Maximum size of the hash table,
  size: Current size of the hash table,
  the data in the hash table
*/

typedef struct _hashmap_map{
  int max_size;
  int size;
  hashmap_elem *data
} hashmap_map



map_t hashmap_new() {
  hashmap_map* m = (hashmap_map*) malloc(sizeof(hashmap_map));
  if (!m) goto error;


}
