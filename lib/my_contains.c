/*
** EPITECH PROJECT, 2022
** B-CPE-200-LYN-2-1-lemin-thomas.brossard
** File description:
** my_contains
*/

#include "my.h"

int my_contains(char const *str, char *regex)
{
    int index = 0;

    for (int r = 0; str[index]; index++) {
        r = (regex[r] && str[index] == regex[r]) ? r + 1 : 0;
        if (!regex[r])
            return (index);
    }
    return (0);
}
