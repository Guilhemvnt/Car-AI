/*
** EPITECH PROJECT, 2021
** int to string
** File description:
** int to char *
*/

#include "my.h"

char *submit_string(char *result, int pos)
{
    if (pos == 1) {
        for (int j = my_strlen(result); j > 0; j--)
            result[j] = result[j - 1];
        result[0] = '-';
    }
    return (result);
}

char *int_to_string(int nb)
{
    char *result = malloc(sizeof(char));
    int mod = 0;
    int pos = (nb < 0) ? nb = nb * (-1), 1 : 0;

    for (int i = 0; nb >= 0; i++) {
        if (nb >= 10) {
            mod = (nb % 10);
            nb = (nb - mod) / 10;
            result[i] = 48 + mod;
        } else {
            result[i] = 48 + nb % 10;
            result = my_revstr(result);
            result = submit_string(result, pos);
            return (result);
        }
    }
    return (result);
}
