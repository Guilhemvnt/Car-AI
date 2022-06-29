/*
** EPITECH PROJECT, 2021
** my_revstr.C
** File description:
** task03
*/

#include "my.h"

char *my_revstr(char *str)
{
    char *u = malloc(sizeof(char) * my_strlen(str) + 1);
    int i = 0;

    for (str += (my_strlen(str) - 1); *str; u[i++] = *str, str--);
    u[i] = '\0';
    return (u);
}
