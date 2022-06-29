/*
** EPITECH PROJECT, 2021
** start_with
** File description:
** strt with
*/

#include "my.h"

int start_with(char *str, char *regex)
{
    while (*regex)
        if (*str++ != *regex++)
            return (-1);
    return (0);
}
