/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** equals
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int result = 0;
    int len = 0;
    char const *tmp = s1;

    while (*tmp++) len++;
    for (int i = 0; i < len; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        result = 0;
    }
    return (result);
}
