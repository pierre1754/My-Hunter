/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef OBJECT_H
#define OBJECT_H

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

#endif // OBJECT_H
