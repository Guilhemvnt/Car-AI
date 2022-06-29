/*
** EPITECH PROJECT, 2022
** B-AIA-200-LYN-2-1-n4s-guilhem.vinet
** File description:
** infos
*/

#ifndef INFOS_H_
    #define INFOS_H_

typedef struct infos_s {
    char **lidar_split;
    char *lidar[6];
    float lidar_float[6];
    char *wheels;
    int is_turning_left;
    int stop_action;
    int forwarding;
    char *f_sign;
    int wheels_dir;
    char *w_sign;
} infos_t;

#endif /* !INFOS_H_ */
