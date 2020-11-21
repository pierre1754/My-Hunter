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

    sfSprite_setOrigin(GET_OBJ_ENV_AIM_IMG(engine), (sfVector2f) {256, 256});
    sfSprite_setOrigin(GET_OBJ_ENV_CANON_IMG(engine), (sfVector2f) {100, 0});
    sfSprite_setOrigin(GET_OBJ_ENV_CANON_EXP(engine), (sfVector2f) {96, 102});
    sfSprite_setOrigin(GET_OBJ_ENV_BUTTON_IMG(engine), (sfVector2f) {337, 208});
    sfSprite_scale(GET_OBJ_ENV_BUTTON_IMG(engine), (sfVector2f) {0.5f, 0.5f});
}

void init_cursor(void)
{
    engine_t *engine = get_engine();

    sfRenderWindow_setMouseCursorVisible(GET_WINDOW(engine), sfFalse);
}

void init_music(void)
{
    engine_t *engine = get_engine();

    sfMusic_play(GET_ASSET_AMBIANCE(engine));
    sfMusic_setLoop(GET_ASSET_AMBIANCE(engine), sfTrue);
}

void init_element(void)
{
    init_origin_img();
    init_cursor();
    init_music();
}
