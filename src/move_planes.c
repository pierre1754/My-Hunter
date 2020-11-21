/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void move_planes(void)
{
    engine_t *engine = get_engine();
    plane_t *plane;

    LIST_FOREACH(plane, GET_OBJ_LISTHEAD(engine), entries) {
        sfSprite_move(plane->plane, plane->deplacement);
        sfSprite_getPosition(plane->plane);
    }
}
