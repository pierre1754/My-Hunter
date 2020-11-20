/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void init_origin_img(void)
{
    engine_t *engine = get_engine();

    sfMusic_play(GET_ASSET_AMBIANCE(engine));
    sfMusic_setLoop(GET_ASSET_AMBIANCE(engine), sfTrue);
    sfSprite_setOrigin(GET_OBJ_ENV_AIM_IMG(engine), (sfVector2f) {256, 256});
    sfSprite_setOrigin(GET_OBJ_ENV_CANON_IMG(engine), (sfVector2f) {100, 0});
}
