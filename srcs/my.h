/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** all prototypes.
*/

#ifndef MY_H
#define MY_H

#include "../Include/my.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct my_struct_s {
    int a;
    int b;
} my_t;

int lateral(char **infos);
void ai_3(char *char_nb_forward, char *char_nb_f_right, char *char_nb_f_left,
char **infos);
int ai_2(char **infos, int nb_len);
void ai(void);

#endif