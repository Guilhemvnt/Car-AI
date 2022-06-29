/*
** EPITECH PROJECT, 2022
** B-PSU-210-LYN-2-1-minishell2-antoine.fillaudeau
** File description:
** my_str_to_word_array_utils
*/

#include "my.h"

void my_str_to_word_array_free(char **str)
{
    for (int k = 0; str[k]; k++)
        free(str[k]);
    free(str);
}

char **my_str_to_word_array_reverse(char **str)
{
    int len = my_bi_strlen(str);
    int i = 0;
    int j = 0;
    char **dest = malloc(sizeof(char *) * (len + 1));
    char **src = str;

    for (src += (len - 1); len--; src--, i++, j = 0) {
        dest[i] = malloc(sizeof(char) * (my_strlen(*src) + 1));
        for (char *tmp = *src; tmp[j]; dest[i][j] = tmp[j], j++);
        dest[i][j] = '\0';
    }
    dest[i] = NULL;
    my_str_to_word_array_free(str);
    return (dest);
}

char **my_str_to_word_array(char *src, int occ)
{
    char **str;
    char **dest;
    my_split_t *src_split = my_split(src, occ);
    int len = 0;
    int i = 0;
    int j = 0;

    for (my_split_t *tmp = src_split; tmp; tmp = tmp->next, len++);
    str = malloc(sizeof(char *) * (len + 1));
    for (my_split_t *tmp = src_split; tmp; tmp = tmp->next, i++) {
        str[i] = malloc(sizeof(char) * (my_strlen(tmp->str) + 1));
        for (j = 0; tmp->str[j]; str[i][j] = tmp->str[j], j++);
        str[i][j] = '\0';
    }
    str[i] = NULL;
    my_split_free(src_split);
    dest = my_str_to_word_array_reverse(str);
    return (dest);
}
