/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** equals
*/

#include "my.h"

int check_case(char src, char comp)
{
    int tmp = -1;

    if (src >= 65 && src <= 90)
        tmp = (src + 32 == comp || src == comp) ? 0 : -1;
    if (src >= 97 && src <= 122)
        tmp = (src - 32 == comp || src == comp) ? 0 : -1;
    return (tmp);
}

int equals_ignore_case(char *str, char *comp)
{
    int len_str = 0;
    int len_comp = 0;

    for (char *tmp = str; *tmp++; len_str++);
    for (char *tmp = comp; *tmp++; len_comp++);
    if (len_str != len_comp)
        return (-1);
    while (*comp)
        if (check_case(*str++, *comp++) == -1)
            return (-1);
    return (0);
}

int equals(char *str, char *comp)
{
    int len_str = 0;
    int len_comp = 0;

    for (char *tmp = str; *tmp++; len_str++);
    for (char *tmp = comp; *tmp++; len_comp++);
    if (len_str != len_comp)
        return (-1);
    for (char *tmp = comp; *tmp;) {
        if (*tmp++ != *str++)
            return (-1);
    }
    return (0);
}
