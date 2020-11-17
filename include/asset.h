/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef ASSET_H
#define ASSET_H

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
} asset_t;

void create_asset(void);

#endif // ASSET_H
