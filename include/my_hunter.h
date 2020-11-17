/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef SCREENSAVER_H
#define SCREENSAVER_H

#include "my.h"

#include "window.h"
#include "asset.h"
#include "object.h"

typedef struct {
    char help;
    char describe;
} opt_t;

typedef struct {
    window_t *window;
    asset_t *asset;
    object_t *object;
} engine_t;

int flag(int ac, char **av);

engine_t *get_engine(void);


#endif
