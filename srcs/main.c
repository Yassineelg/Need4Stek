/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** main
*/

#include "my.h"

int turn_left(char *char_nb_left, char *char_nb_right)
{
    char *line = NULL;
    size_t len = 0;

    my_putstr("WHEELS_DIR:0.3\n");
    getline(&line, &len, stdin);
    my_putstr("CAR_FORWARD:0.18\n");
    getline(&line, &len, stdin);
}

int turn_right(char *char_nb_left, char *char_nb_right)
{
    char *line = NULL;
    size_t len = 0;

    my_putstr("WHEELS_DIR:-0.3\n");
    getline(&line, &len, stdin);
    my_putstr("CAR_FORWARD:0.18\n");
    getline(&line, &len, stdin);
}

int lateral(char **infos)
{
    char *char_nb_left = NULL;
    char *char_nb_right = NULL;
    char *line = NULL;
    size_t len = 0;
    int nb_len = 0;

    for (int nb_len = 0; infos[3] && infos[3][nb_len] != '.'; nb_len++);
    char_nb_left = malloc(sizeof(char) * nb_len);
    for (int i = 0; infos[3] && infos[3][i] != '.'; i++)
        char_nb_left[i] = infos[3][i];
    for (int nb_len = 0; infos[34] && infos[34][nb_len] != '.'; nb_len++);
    char_nb_right = malloc(sizeof(char) * nb_len);
    for (int i = 0; infos[34] && infos[34][i] != '.'; i++)
        char_nb_right[i] = infos[34][i];
    if (atoi(char_nb_left) < atoi(char_nb_right))
        turn_right(char_nb_left, char_nb_right);
    if (atoi(char_nb_right) < atoi(char_nb_left))
        turn_left(char_nb_left, char_nb_right);

}

int main(void)
{
    char *line;
    size_t len;

    my_putstr("START_SIMULATION\n");
    getline(&line, &len, stdin);
    ai();
    my_putstr("END_SIMULATION\n");
    getline(&line, &len, stdin);
    return (0);
}