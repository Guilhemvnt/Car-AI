/*
** EPITECH PROJECT, 2022
** strcpy
** File description:
** cpy
*/

#include "my.h"

char *my_strcpy(char *str)
{
    int len = my_strlen(str);
    char *tmp = malloc(sizeof(char) * (len + 1));
    int i = 0;

    for (; str[i] != '\0'; i++)
        tmp[i] = str[i];
    tmp[i] = '\0';
    return (tmp);
}
