/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** putstr
*/

#include "my.h"

void my_putstr(char const *str)
{
    for (; *str; my_putchar(*str++));
}

void my_putstr2(va_list *ap)
{
    my_putstr(va_arg(*ap, char *));
}
