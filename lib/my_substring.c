/*
** EPITECH PROJECT, 2022
** B-PSU-210-LYN-2-1-minishell2-antoine.fillaudeau
** File description:
** my_substring
*/

#include "my.h"

char *my_substring(char *str, int start, int end)
{
    int len = my_strlen(str);
    int c = 0;
    char *dest = malloc(sizeof(char) * ((len + (end - start)) + 1));

    for (int i = start; i < (len - end); dest[c++] = str[i], i++);
    dest[c] = '\0';
    free(str);
    return (dest);
}
