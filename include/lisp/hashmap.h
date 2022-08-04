/*
 * MIT License
 *
 * Copyright (c) 2022 0x1d6cc
 */

#ifndef HASHMAP_H_
#define HASHMAP_H_
// hide implementation of entry
typedef struct entry Entry;
typedef struct hashmap Hashmap;
struct hashmap {
  Entry* array;       // hashmap array to store entries
  size_t capacity;    // capacity of hashmap
  size_t no_in_use;   // number of entries in use within the hashmap
};

Hashmap* hashmap_create(void);
int hashmap_insert(Hashmap* map, const char* key, void* value);
void* hashmap_retrieve(Hashmap* map, const char* key);
int hashmap_erase(Hashmap* map, const char* key);
int hashmap_resize(Hashmap* map);
void hashmap_destroy(Hashmap* map);
#endif // HASHMAP_H_
