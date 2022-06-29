/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** task02
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    char *tmp = my_strcpy(dest);
    int len = my_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++)
        tmp[len + i] = src[i];
    tmp[len + i] = '\0';
    return (tmp);
}
