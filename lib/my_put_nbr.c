/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** affiche des nombres
*/

#include "my.h"

void my_put_nbr2(va_list *ap)
{
    int nb = va_arg(*ap, int);

    if (nb < 0) {
        my_put_nbr(4294967296 + nb);
    } else {
        my_put_nbr(nb);
    }
}

int my_put_nbr(int nb)
{
    int mod;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            mod = (nb % 10);
            nb = (nb - mod) / 10;
            my_put_nbr(nb);
            my_putchar(48 + mod);
        } else {
            my_putchar(48 + nb % 10);
        }
    }
    return (0);
}
