/*
** EPITECH PROJECT, 2021
** my_revstr.C
** File description:
** task03
*/

#include "my.h"

char **my_bi_revstr(char **str)
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
