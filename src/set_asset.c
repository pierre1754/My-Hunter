/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

static void init_texture_array(void)
{
    int nbr_element = 1;
    engine_t *engine = get_engine();

    engine->asset->texture_array = malloc(sizeof(plane_set_t *) *
                                                (nbr_element + 1));
    for (int i = 0; i < nbr_element; i++) {
        engine->asset->texture_array[i] = malloc(sizeof(plane_set_t));
    }
    GET_ASSET_TEXTURE_CASE(engine, 0) =
    sfTexture_createFromFile("asset/plane_sprite_1_475_101.png", NULL);
    GET_ASSET_TEXTURE_RECT(engine, 0) = (sfIntRect) {0, 0, 238, 101};
}

void create_asset(void)
{
    engine_t *engine = get_engine();

    engine->asset = malloc(sizeof(asset_t));
    GET_ASSET_AMBIANCE(engine) =
    sfMusic_createFromFile("asset/background_music.mp3");
    init_texture_array();
}
