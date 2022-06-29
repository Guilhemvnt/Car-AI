/*
** EPITECH PROJECT, 2022
** ignore_case
** File description:
** ignore case
*/

#include "my.h"

int get_case(char c)
{
    int c_case = 0;

    if (c > 64 && c < 91)
        c_case = 1;
    if (c > 96 && c < 122)
        c_case = 2;
    return (c_case);
}

int ignore_case(char c, char comp)
{
    int result = 1;
    int state_c = get_case(c);
    int state_comp = get_case(comp);

    if (state_c == comp)
        result = 0;
    if (state_c != state_comp) {
        if (state_c < state_comp && c + 32 == comp)
            result = 0;
        else if (c - 32 == comp)
            result = 0;
    }
    if (c == comp)
        result = 0;
    return (result);
}
