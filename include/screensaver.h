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
#include <sys/queue.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>

#include "my.h"

#include "asset.h"
#include "object.h"

typedef struct {
    char help;
    char describe;
} opt_t;


typedef struct {
    sfRenderWindow *window;
    sfVector2f window_size;
} window_t;


typedef struct {
    window_t *window;
    asset_t *asset;

} egine_t;

int flag(int ac, char **av);

#endif
