/*
** EPITECH PROJECT, 2020
** my_lib.c
** File description:
** 06/10/2020
*/

#ifndef SCREENSAVER_H
#define SCREENSAVER_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>

#include "my.h"

typedef struct {
    char help;
    char describe;
} opt_t;

int flag(int ac, char **av);


#endif
