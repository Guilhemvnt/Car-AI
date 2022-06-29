/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** strlen
*/

#include "my.h"

int my_strlen(char *str)
{
    char const *tmp = str;

    while (*tmp++);
    return (tmp - str - 1);
}

int my_strlen_index(char *str, int i)
{
    int len = 0;

    for (int tmp = i; str[tmp] != '\n'; tmp++, len++);
    return (len);
}

int my_bi_strlen(char **str)
{
    int i = 0;

    for (; *str++; i++);
    return (i);
}
