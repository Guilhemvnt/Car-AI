/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** putchar
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putchar2(va_list *ap)
{
    my_putchar(va_arg(*ap, int));
}
