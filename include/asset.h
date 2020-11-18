/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef ASSET_H
#define ASSET_H

#define GET_ASSET_AMBIANCE(engine) (engine->asset->ambiance)

#define GET_ASSET_TEXTURE_CASE(engine, x) (engine->asset->texture_array[x]->plane_texture)
#define GET_ASSET_TEXTURE_RECT(engine, x) (engine->asset->texture_array[x]->rectangle_texture)

typedef struct {
    sfTexture *plane_texture;
    sfIntRect rectangle_texture;
} plane_set_t;

typedef enum {
    soundHit,
    soundshot,
    soundPlaneEngine,

    soundSize
} sound_type_t;

typedef struct {
    sfMusic *ambiance;
    plane_set_t **texture_array;
    sfSound *sound_array[soundSize];
} asset_t;

void create_asset(void);

#endif // ASSET_H
