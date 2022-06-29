/*
** EPITECH PROJECT, 2022
** B-CPE-200-LYN-2-1-lemin-thomas.brossard
** File description:
** my_split
*/

#ifndef MY_SPLIT_H_
    #define MY_SPLIT_H_

    #include "my.h"

    typedef struct my_split {
        char *str;
        int len;
        struct my_split *next;
    } my_split_t;

    void my_put_in_split(my_split_t **s, char *str, int len);

#endif /* !MY_SPLIT_H_ */
