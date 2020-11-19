/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void set_image_pos(void)
{
    engine_t *engine = get_engine();

    sfSprite_setPosition(GET_OBJ_ENV_CANON_IMG(engine),
                        (sfVector2f) {GET_MOUSE_POS(engine).x,
                        797});
    sfSprite_setPosition(GET_OBJ_ENV_AIM_IMG(engine), GET_MOUSE_POS(engine));
}
