/*
** EPITECH PROJECT, 2021
** printf
** File description:
** printf
*/

#include "my.h"

void check(va_list *ap, char comp)
{
    char *flags = "diucsSpoOxXb";
    void (*fptr[12])(va_list *) = {my_put_nbr2, my_put_nbr2, my_put_nbr2,
        my_putchar2, my_putstr2, print_capital_string, print_ptr,
        print_octal, print_octal, print_hexa, print_hexa_cap, print_bin};

    if (comp == '%')
        my_putchar('%');
    for (int i = 0; *flags; i++) {
        if (*flags++ == comp)
            (*fptr[i])(ap);
    }
}

int my_printf(const char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    while (*str) {
        if (*str != '%') {
            my_putchar(*str++);
        } else {
            *str++;
            check(&ap, *str++);
        }
    }
    va_end(ap);
    return (0);
}
