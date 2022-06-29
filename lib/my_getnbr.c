/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** my_getnbr
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int number = 0;
    int j = 0;
    int sub = 0;

    while (str[i] != '\0') {
        if (str[i] > 47 && str[i] < 58) {
            (i == 1 && str[i - 1] == 45) ? sub = 1 : 0;
            number = number * 10 + (str[i] - 48);
            j = 1;
        } else if (j == 1) {
            return (number);
        }
        i++;
    }
    (sub == 1) ? number = number * -1 : 0;
    return (number);
}

int my_getnbr_index(char const *str, int i)
{
    int number = 0;
    int j = 0;
    int sub = 0;

    while (str[i] != '\0') {
        if (str[i] > 47 && str[i] < 58) {
            (i == 1 && str[i - 1] == 45) ? sub = 1 : 0;
            number = number * 10 + (str[i] - 48);
            j = 1;
        } else if (j == 1) {
            return (number);
        }
        i++;
    }
    (sub == 1) ? number = number * -1 : 0;
    return (number);
}

int my_getnbr_index_bis(char const *str, int *i)
{
    int number = 0;
    int j = 0;
    int sub = 0;

    while (str[*i] != '\0') {
        if (str[*i] > 47 && str[*i] < 58) {
            (*i == 1 && str[*i - 1] == 45) ? sub = 1 : 0;
            number = number * 10 + (str[*i] - 48);
            j = 1;
        } else if (j == 1) {
            return (number);
        }
        *i = *i + 1;
    }
    (sub == 1) ? number = number * -1 : 0;
    return (number);
}
