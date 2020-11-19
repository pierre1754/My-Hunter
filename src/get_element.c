/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void get_mouse_pos(void)
{
    engine_t *engine = get_engine();
    sfVector2i vector = sfMouse_getPositionRenderWindow(GET_WINDOW(engine));

    GET_MOUSE_POS(engine).x = (float) vector.x;
    GET_MOUSE_POS(engine).y = (float) vector.y;
}
