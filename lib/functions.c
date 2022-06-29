/*
** EPITECH PROJECT, 2021
** functions
** File description:
** fucntions
*/

#include "my.h"

void print_bin(va_list *ap)
{
    int n = va_arg(*ap, int);
    char *result = malloc(1000);

    while (n > 1) {
        result[my_strlen(result)] = (n % 2) + 48;
        n /= 2;
    }
    result[my_strlen(result)] = (n % 2) + 48;
    result = my_revstr(result);
    my_putstr(result);
    free(result);
}

void print_hexa(va_list *ap)
{
    int n = va_arg(*ap, int);
    char *arr = "0123456789abcdef";
    char *result = malloc(1000);

    while (n > 0) {
        result[my_strlen(result)] = arr[n % 16];
        n /= 16;
    }
    my_putstr(my_revstr(result));
    free(result);
}

void print_hexa_cap(va_list *ap)
{
    int n = va_arg(*ap, int);
    char *arr = "0123456789ABCDEF";
    char *result = malloc(1000);

    while (n > 0) {
        result[my_strlen(result)] = arr[n % 16];
        n /= 16;
    }
    my_putstr(my_revstr(result));
    free(result);
}

void print_octal(va_list *ap)
{
    int n = va_arg(*ap, int);
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

void print_ptr(va_list *ap)
{
    unsigned long n = va_arg(*ap, unsigned long);
    char *arr = "0123456789abcdef";
    char *result = malloc(1000);

    if (n == 0) {
        my_putstr("(nil)");
        return;
    }
    while (n > 0) {
        result[my_strlen(result)] = arr[n % 16];
        n /= 16;
    }
    my_putstr("0x");
    my_putstr(my_revstr(result));
}
