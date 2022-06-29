/*
** EPITECH PROJECT, 2021
** hashmap
** File description:
** hashmap
*/

#include "my.h"

char **split_test(char *str, char occ);
int my_strcmp(char const *s1, char const *s2);

int hashmap_put(hashmap_t **hm, void *key, void *value)
{
    hashmap_t *elem = malloc(sizeof(hashmap_t));

    for (hashmap_t *tmp = *hm; tmp; tmp = tmp->next) {
        if (key == tmp->key) {
            tmp->key = key;
            tmp->value = value;
            return (0);
        }
    }
    elem->key = key;
    elem->value = value;
    elem->next = *hm;
    *hm = elem;
    return (0);
}

void *hashmap_get(hashmap_t *hm, void *key)
{
    for (hashmap_t *tmp = hm; tmp; tmp = tmp->next) {
        if (key == tmp->key)
            return (tmp->value);
    }
}

int hashmap_size(hashmap_t *hm)
{
    int count = 0;

    for (hashmap_t *tmp = hm; tmp; tmp = tmp->next)
        count++;
    return (count);
}

hashmap_t **hashmap_list(hashmap_t *hm)
{
    hashmap_t *tmp = hm;
    hashmap_t **s = malloc(sizeof(hashmap_t *));

    for (int i = 0; tmp != NULL; i++) {
        s[i] = tmp;
        tmp = tmp->next;
    }
    return (s);
}
