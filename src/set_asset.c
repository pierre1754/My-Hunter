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
    int nbr_element = 0;

    engine->asset->texture_array = malloc(sizeof(plane_set_t *) *
                                                (nbr_element + 1));
    for (int i = 0; i < nbr_element; i++) {
        engine->asset->texture_array[i] = malloc(sizeof(plane_set_t));
    }
    engine->asset->texture_array[0]->plane_texture =
    sfTexture_createFromFile("VOIR TEXTURE AVION N°1", NULL);
    // TO SEE -> ADD TEXTURES
}

void create_asset(void)
{
    engine_t *engine = get_engine();

    engine->asset = malloc(sizeof(asset_t));
    engine->asset->ambiance = sfMusic_createFromFile("VOIR POUR DU SABATON");
    init_texture_array();
    engine->asset->
}
