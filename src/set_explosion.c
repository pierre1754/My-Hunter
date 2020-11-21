/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void set_sprite_explosion(void)
{
    engine_t *engine = get_engine();

    if (!GET_EXP_BOOL(engine))
        return;
    GET_EXP_RECT(engine).left = (GET_EXP_RECT(engine).left + 256) % 1024;
    sfSprite_setTextureRect(GET_EXP_IMG(engine), GET_EXP_RECT(engine));
    GET_EXP_BOOL(engine)++;
}

void set_explosion(plane_t *plane)
{
    engine_t *engine = get_engine();

    GET_EXP_BOOL(engine) = 1;
    GET_EXP_POS(engine) = plane->position;
    sfSound_play(GET_EXP_SOUND(engine));
    sfSprite_setPosition(GET_EXP_IMG(engine), GET_EXP_POS(engine));
    sfSprite_setOrigin(GET_EXP_IMG(engine), (sfVector2f){0, 70});
}
