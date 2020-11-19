/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void draw_element()
{
    engine_t *engine = get_engine();

    sfRenderWindow_clear(GET_WINDOW(engine), sfBlack);
    sfRenderWindow_drawSprite(GET_WINDOW(engine),
                            GET_OBJ_ENV_BACKGROUND_IMG(engine),
                            NULL);
    sfRenderWindow_drawSprite(GET_WINDOW(engine),
                            GET_OBJ_ENV_AIM_IMG(engine),
                            NULL);
    sfRenderWindow_display(GET_WINDOW(engine));
}
