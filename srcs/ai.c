/*
** EPITECH PROJECT, 2020
** ai.c
** File description:
** ai
*/

#include "my.h"

void ai_3(char *char_nb_forward, char *char_nb_f_right, char *char_nb_f_left,
char **infos)
{
    size_t len = 0;
    char *line = NULL;

    if (atoi(char_nb_forward) > 700 && atoi(char_nb_f_right) > 700
    && atoi(char_nb_f_left) > 700) {
        my_putstr("CAR_FORWARD:0.2\n");
        getline(&line, &len, stdin);
        my_putstr("WHEELS_DIR:0\n");
        getline(&line, &len, stdin);
    } else lateral(infos);
}

int ai_2(char **infos, int nb_len)
{
    char *char_nb_forward = NULL;
    char *char_nb_f_left = NULL;
    char *char_nb_f_right = NULL;

    for (nb_len = 0; infos[17] && infos[17][nb_len] != '.'; nb_len++);
    char_nb_forward = malloc(sizeof(char) * nb_len);
    for (int i = 0; infos[17] && infos[17][i] != '.'; i++)
    char_nb_forward[i] = infos[17][i];
    for (nb_len = 0; infos[11] && infos[11][nb_len] != '.'; nb_len++);
    char_nb_f_left = malloc(sizeof(char) * nb_len);
    for (int i = 0; infos[11] && infos[11][i] != '.'; i++)
    char_nb_f_left[i] = infos[11][i];
    for (nb_len = 0; infos[22] && infos[22][nb_len] != '.'; nb_len++);
    char_nb_f_right = malloc(sizeof(char) * nb_len);
    for (int i = 0; infos[22] && infos[22][i] != '.'; i++)
    char_nb_f_right[i] = infos[22][i];
    for (int i = 0; infos[i]; i++)
        if (!strcmp("Track Cleared", infos[i])) return (1);
    ai_3(char_nb_forward, char_nb_f_right, char_nb_f_left, infos);
    return (0);
}

void ai(void)
{
    char **infos = NULL;
    char *line = NULL;
    size_t len = 0;
    int nb_len = 0;
    int ret = 0;

    while (1) {
        my_putstr("GET_INFO_LIDAR\n");
        getline(&line, &len, stdin);
        infos = my_str_to_word_array(line, ':');
        ret = ai_2(infos, nb_len);
        if (ret == 1) return;
    }
}