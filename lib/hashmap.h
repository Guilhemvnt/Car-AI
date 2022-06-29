/*
** EPITECH PROJECT, 2021
** hashmap
** File description:
** hashmap
*/

#ifndef HASHMAP_H_
    #define HASHMAP_H_
    typedef struct hashmap {
        void *key;
        void *value;
        struct hashmap *next;
    } hashmap_t;
    int hashmap_put(hashmap_t **hm, void *key, void *value);
    void *hashmap_get(hashmap_t *hm, void *key);
    int hashmap_size(hashmap_t *hm);
    hashmap_t **hashmap_list(hashmap_t *hm);
#endif
