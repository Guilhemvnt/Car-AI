/*
** EPITECH PROJECT, 2021
** print S
** File description:
** s
*/

#include "my.h"

void print_octal_string(int n)
{
    char *result = malloc(1000);

    while (n > 7) {
        result[my_strlen(result)] = (n % 8) + 48;
        n /= 8;
    }
    result[my_strlen(result)] = (n % 8) + 48;
    result = my_revstr(result);

    if (my_getnbr(result) < 10) {
        my_putstr("00");
        my_putstr(result);
    }
    if (my_getnbr(result) > 9) {
        my_putchar('0');
        my_putstr(result);
    }
    if (my_getnbr(result) > 99)
        my_putstr(result);
    free(result);
}

void print_capital_string(va_list *ap)
{
    char *str = va_arg(*ap, char *);
    while (*str) {
        if (*str < 32 || *str >= 127) {
            my_putchar('\\');
            print_octal_string(*str++);
            continue;
        }
        my_putchar(*str++);
    }
}
