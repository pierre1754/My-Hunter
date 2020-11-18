/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

static void init_texture_array(void)
{
    engine_t *engine = get_engine();

    for (int i = 0; i < imageSize; i++) {
        GET_ASSET_TEXTURE(engine, i) = malloc(sizeof(plane_set_t));
    }
    GET_ASSET_TEXTURE_CASE(engine, 0) =
    sfTexture_createFromFile("asset/plane_sprite_1_475_101.png", NULL);
    GET_ASSET_TEXTURE_RECT(engine, 0) = (sfIntRect) {0, 0, 238, 101};
}

static void init_sound_array(void)
{
    engine_t *engine = get_engine();
    sfSoundBuffer *buffer =
    sfSoundBuffer_createFromFile("asset/explosion_sound.mp3");

    sfSound_setBuffer(GET_ASSET_SOUND(engine, soundHit), buffer);
    sfSoundBuffer_destroy(buffer);
    buffer =
    sfSoundBuffer_createFromFile("asset/shot_sound.mp3");
    sfSound_setBuffer(GET_ASSET_SOUND(engine, soundShot), buffer);
    sfSoundBuffer_destroy(buffer);
    buffer =
    sfSoundBuffer_createFromFile("asset/motor_sound.mp3");
    sfSound_setBuffer(GET_ASSET_SOUND(engine, soundPlaneEngine), buffer);
    sfSoundBuffer_destroy(buffer);
}

void create_asset(void)
{
    engine_t *engine = get_engine();

    engine->asset = malloc(sizeof(asset_t));
    GET_ASSET_AMBIANCE(engine) =
    sfMusic_createFromFile("asset/background_music.mp3");
    init_texture_array();
    init_sound_array();
}

static void destroy_texture_sound(void)
{
    engine_t *engine = get_engine();

    for (int i = 0; i < imageSize; i++) {
        sfTexture_destroy(GET_ASSET_TEXTURE_CASE(engine, i));
        GET_ASSET_TEXTURE(engine, i) = malloc(sizeof(plane_set_t));
    }
    for (int i = 0; i < soundSize; i++) {
        sfTexture_destroy(GET_ASSET_TEXTURE_CASE(engine, i));
        GET_ASSET_TEXTURE(engine, i) = malloc(sizeof(plane_set_t));
    }
}

void destroy_asset(void)
{
    engine_t *engine = get_engine();

    sfMusic_destroy(GET_ASSET_AMBIANCE(engine));
    destroy_texture_sound();
}
