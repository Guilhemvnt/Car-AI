/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** my_str_to_word_array
*/

#include "my.h"

void my_put_in_split(my_split_t **s, char *str, int len)
{
    my_split_t *elem = malloc(sizeof(my_split_t));

    elem->str = my_strcpy(str);
    elem->len = len;
    elem->next = *s;
    *s = elem;
}

int get_curr(char *str, char occurence, int i)
{
    int len = 1;

    for (; str[i]; len++)
        if (str[i++] == occurence)
            return (len - 1);
    return (len - 1);
}

int get_occ(char *str, char occurence)
{
    int res = 0;

    for (; *str; (*str++ == occurence) ? res++ : 0);
    return (res);
}

void my_split_free(my_split_t *s)
{
    my_split_t *prev;
    int i = 0;

    for (my_split_t *tmp = s; tmp; prev = tmp, tmp = tmp->next)
        (i++ != 0) ? free(prev), free(tmp->str) : free(tmp->str);
    free(prev);
}

my_split_t *my_split(char *str, char d)
{
    my_split_t *split = NULL, *prev, *next;
    char *tmp;

    for (int l = 0, s = 0, o = get_occ(str, d) + 1; o--;) {
        l = get_curr(str, d, s) + 1;
        tmp = malloc(sizeof(char) * l);
        for (int j = s, k = 0; str[j] && str[j] != d; tmp[k++] = str[j++]);
        l = get_curr(str, d, s) + 1;
        s += l;
        tmp[l - 1] = '\0';
        my_put_in_split(&split, tmp, l);
        free(tmp);
    }
    return (split);
}
