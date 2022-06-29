/*
** EPITECH PROJECT, 2022
** binary_to_decimal
** File description:
** bin dec
*/

#include "my.h"

int int_len(int n)
{
    int i;

    for (i = 1; n > 9; i++)
        n /= 10;
    return (i);
}

int local_power(int i)
{
    int result = 2;

    if (i == 0)
        return (0);
    for (int j = 1; j < i; j++)
        result *= 2;
    return (result);
}

int bin_decimal(int bin)
{
    int len = int_len(bin);
    int b[len];
    int result = 0;

    for (int i = 0; i < len; i++) {
        if (bin % 10 == 1 && local_power(i) == 0)
            b[i] = 1;
        else
            b[i] = (bin % 10) * local_power(i);
    }
    for (int i = 0; i < len; i++)
        result += b[i];
    return (result);
}

int get_bin(int n)
{
    char *result = malloc(1000);
    int r_value = 0;

    while (n > 1) {
        result[my_strlen(result)] = (n % 2) + 48;
        n /= 2;
    }
    result[my_strlen(result)] = (n % 2) + 48;
    result = my_revstr(result);
    r_value = my_getnbr(result);
    return (r_value);
}
