/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void destroy_plane(plane_t *plane)
{
    sfSprite_destroy(plane->plane);
    LIST_REMOVE(plane, entries);
    free(plane);
}

void check_plane(void)
{
    engine_t *engine = get_engine();
    plane_t *plane;
    plane_t *temp_plane;

    LIST_FOREACH_SAFE(plane, GET_OBJ_LISTHEAD(engine), entries, temp_plane) {
        if (plane->position.x > 1920)
            destroy_plane(plane);
    }
}
