/*
** EPITECH PROJECT, 2022
** B-AIA-200-LYN-2-1-n4s-guilhem.vinet
** File description:
** need_for_stek
*/

#include "../include/need_for_stek.h"

int check_speed(float f_arr[3])
{
    char *str = NULL;
    size_t len = 0;
    int values[11] = {2000, 1500, 1000, 800, 600, 500, 400, 300, 200, 0};
    char *index[11] = {"1", "0.8", "0.7", "0.6", "0.5", "0.35", "0.3"
    , "0.23", "0.2", "0.1"};
    int i = 0;

    for (float f = f_arr[1]; i < 11; i++) {
        if (f >= values[i] && f > 0) {
            dprintf(1, "CAR_FORWARD:%s\n", index[i]);
            getline(&str, &len, stdin);
            break;
        }
    }
    free(str);
    return (0);
}

int check_wheels(float f_arr[3])
{
    char *str = NULL;
    size_t len = 0;
    int values[10] = {2000, 1500, 800, 600, 500, 400, 300, 200};
    char *index[10] = {"0.01", "0.03", "0.05" "0.062", "0.1", "0.2"
    , "0.3", "0.33", "0.5", "0.7"};
    int i = 0;

    for (float f = f_arr[1]; i < 10; i++) {
        if (f >= values[i] && f > 0) {
            dprintf(1, "WHEELS_DIR:%s%s\n"
            , f_arr[0] - f_arr[2] > 0 ? "" : "-", index[i]);
            getline(&str, &len, stdin);
            break;
        }
    }
    free(str);
    return (0);
}

int handle_moves_b(float f_arr[3])
{
    int r_value = 0;
    int (*fptr[2])(float[3]) = {&check_speed, &check_wheels};

    for (int i = 0; i < 2; i++) {
        if (fptr[i](f_arr) == 1)
            r_value = 1;
    }
    return (r_value);
}

int local_loop(char *str, char **split, size_t len)
{
    for (int mdr = 0; 1; mdr = 0, dprintf(1, "GET_INFO_LIDAR\n")) {
        getline(&str, &len, stdin);
        if (!str)
            continue;
        split = my_str_to_word_array(str, ':');
        for (int i = 0; i < 6; (split[i] && equals(split[i]
        , "No further info\n") != -1 && (mdr++ || (i = 6))), i++);
        if (mdr != 0)
            continue;
        if (split && my_bi_strlen(split) > 34)
            handle_moves_b((float[3]){(split[4]) ? atof(split[4]) : 0.0
            , (split[15]) ? atof(split[15]) : 0.0
            , (split[34]) ? atof(split[34]) : 0.0});
        if (my_contains(str, "Lap Cleared") != 0)
            return (0);
    }
    return (0);
}

int main(int argc, char **argv)
{
    dprintf(1, "START_SIMULATION\n");
    char *str = NULL;
    char **split;
    size_t len = 0;

    local_loop(str, split, len);
    dprintf(1, "STOP_SIMULATION\n");
    return (0);
}
