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

typedef struct {
    char help;
    char describe;
} opt_t;



typedef struct {
    sfRenderWindow *window;
    sfVector2f window_size;
} window_t;


typedef struct {
    sfTexture *plane_texture;
    sfIntRect rectangle_texture;
} plane_set_t;

typedef enum {
    hit,
    shot,
    plane_engine
} sound_type_t;

typedef struct {
    sfMusic *ambiance;
    plane_set_t **texture_array;
    // SEE HERE
} asset_t;


typedef struct {
    sfSprite *canon;
    sfVector2f deplacement;
} canon_t;

typedef struct {
    sfSprite *background;
    sfSprite *aim;
    canon_t *canon;
} environement_t;

typedef struct plane_s {
    sfSprite *plane;
    sfIntRect rectangle_texture;
    sfVector2f deplacement;
    sfVector2f position;
    LIST_ENTRY(plane_s) entries;
} plane_t;

typedef struct {
    environement_t *environement;
    LIST_HEAD(, plane_s) planes;
} object_t;


typedef struct {
    window_t *window;
    asset_t *asset;

} egine_t;

int flag(int ac, char **av);

#endif
