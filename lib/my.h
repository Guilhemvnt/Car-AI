/*
** EPITECH PROJECT, 2021
** my h
** File description:
** h
*/

#ifndef _MY_H
    #define _MY_H
    #include <stdarg.h>
    #include "hashmap.h"
    #include "split.h"
    #include "my_split.h"
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/wait.h>

    char *my_revstr(char *str);
    void print_capital_string(va_list *ap);
    void print_bin(va_list *ap);
    void print_hexa(va_list *ap);
    void print_hexa_cap(va_list *ap);
    void print_octal(va_list *ap);
    int my_strlen(char *str);
    int my_strlen2(va_list ap);
    void my_putchar(char c);
    void my_putchar2(va_list *ap);
    void my_putstr(char const *str);
    void my_putstr2(va_list *ap);
    int my_getnbr(char const *str);
    int my_printf(const char *str, ...);
    int my_put_nbr(int nb);
    void my_put_nbr2(va_list *ap);
    void print_ptr(va_list *ap);
    int my_strcmp(char const *s1, char const *s2);
    char *int_to_string(int nb);
    int start_with(char *str, char *regex);
    int ignore_case(char c, char comp);
    int get_bin(int n);
    int int_len(int n);
    char **my_bi_revstr(char **str);
    int my_bi_strlen(char **str);
    int my_strlen_index(char *str, int i);
    int equals_ignore_case(char *str, char *comp);
    int equals(char *str, char *comp);
    int check_case(char src, char comp);
    char *my_strcpy(char *str);
    int my_getnbr_index(char const *str, int i);
    int my_getnbr_index_bis(char const *str, int *i);
    my_split_t *my_split(char *str, char d);
    void my_split_free(my_split_t *s);
    char **my_str_to_word_array(char *src, int occ);
    void my_str_to_word_array_free(char **str);
    char **my_str_to_word_array_reverse(char **str);
    int my_printf(const char *str, ...);
    int my_contains(char const *str, char *regex);
    int my_contains_index(char const *str, char *regex, int index);
    char *my_strcat(char *dest, char const *src);
    char *my_substring(char *str, int start, int end);
#endif
