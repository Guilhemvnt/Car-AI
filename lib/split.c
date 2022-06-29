/*
** EPITECH PROJECT, 2021
** split
** File description:
** split
*/

#include "my.h"

void put_in_split(s_split **s, char *str)
{
    s_split *element = malloc(sizeof(*element));

    element->tmp = str;
    element->next = *s;
    *s = element;
}

char **split_test(char *str, char occ)
{
    char *tmp = malloc(sizeof(str) * my_strlen(str) + 1);
    s_split *s = NULL;
    int len = 0;
    int n = 0;

    for (int j = 0; str[j] != '\0'; j++)
        if (str[j] == occ)
            n++;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == occ) {
            put_in_split(&s, tmp);
            len = 0;
            tmp = malloc(sizeof(str) * my_strlen(str) + 1);
            continue;
        }
        tmp[len++] = str[i];
    }
    put_in_split(&s, tmp);
    return (split(s, occ));
}

char **split(s_split *s, char occ)
{
    char **result = malloc(1000);
    char **res_ = malloc(1000);
    s_split *str = s;

    for (int i = 0; str != NULL; i++) {
        result[i] = str->tmp;
        str = str->next;
    }
    return (split_reverse(result));
}

char **split_reverse(char **str)
{
    int i = 0;
    int len = 0;

    for (char **tmp = str; *tmp++; len++);

    char *temp = malloc(sizeof(str[0]) * my_strlen(str[0]));
    int j = len - 1;

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    return (str);
}
