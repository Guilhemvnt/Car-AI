/*
** EPITECH PROJECT, 2022
** B-AIA-200-LYN-2-1-n4s-guilhem.vinet
** File description:
** need_for_stek
*/

#ifndef NEED_FOR_STEK_H_
    #define NEED_FOR_STEK_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

    #include "../lib/my.h"
    #include "infos.h"

    int main_loop(infos_t *infos);
    int parse_infos(infos_t *infos, char *str);
    int handle_moves(infos_t *infos, int *p_a[2], char **p_b[2]);

#endif /* !NEED_FOR_STEK_H_ */
