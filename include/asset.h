/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef ASSET_H
#define ASSET_H

#define GET_ASSET_AMBIANCE(engine) (engine->asset->ambiance)

#define GET_ASSET_TEXTURE(engine, x) (engine->asset->texture_array[x])

#define GET_ASSET_TEXTURE_BUFFER(engine, x) (engine->asset->texture_array[x]->buffer_texture)
#define GET_ASSET_TEXTURE_CASE(engine, x) (engine->asset->texture_array[x]->plane_texture)
#define GET_ASSET_TEXTURE_RECT(engine, x) (engine->asset->texture_array[x]->rectangle_texture)

#define GET_ASSET_SOUND(engine, x) (engine->asset->sound_array[x])

typedef enum {
    imagePlane_1,

    imageSize
} image_type_t;

typedef struct {
    sfTexture *plane_texture;
    sfIntRect rectangle_texture;
} plane_set_t;

typedef enum {
    soundHit,
    soundShot,
    soundPlaneEngine,

    soundSize
} sound_type_t;

typedef struct {
    sfSoundBuffer *buffer_sound;
    sfSound *various_sound;
} sound_t;

typedef struct {
    sfMusic *ambiance;
    plane_set_t *texture_array[imageSize];
    sound_t *sound_array[soundSize];
} asset_t;

void create_asset(void);

#endif // ASSET_H
