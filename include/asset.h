/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef ASSET_H
#define ASSET_H

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
    sfSound **sound_array;
    sound_type_t sounds;
} asset_t;

#endif // ASSET_H
