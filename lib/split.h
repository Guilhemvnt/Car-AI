/*
** EPITECH PROJECT, 2021
** split
** File description:
** split
*/

#ifndef h_h
    #define h_h
    typedef struct split {
        char *tmp;
        struct split *next;
    } s_split;
    void put_in_split(s_split **s, char *str);
    char **split(s_split *s, char occ);
    char **split_test(char *str, char occ);
    char **split_reverse(char **str);
#endif
