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
        sfSprite_move(plane->plane,
                    (sfVector2f){plane->deplacement.x *
                    GET_ELAPSED(engine) * 100,
                    plane->deplacement.y *
                    GET_ELAPSED(engine) * 100});
        plane->position = sfSprite_getPosition(plane->plane);
    }
    check_plane();
}
