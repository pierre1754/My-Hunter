/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

plane_t *create_plane(void)
{
    engine_t *engine = get_engine();
    plane_t *plane = malloc(sizeof(plane_t));

    plane->plane = sfSprite_create();
    sfSprite_setTexture(plane->plane,
                        GET_ASSET_TEXTURE_CASE(engine, 0),
                        sfTrue);
    plane->rectangle_texture = GET_ASSET_TEXTURE_RECT(engine, 0);
    plane->deplacement = (sfVector2f){rand() % 50, 0};
    plane->position = (sfVector2f){0, 0};
    sfSprite_setPosition(plane->plane, plane->position);
    return plane;
}

static void create_planes(void)
{
    engine_t *engine = get_engine();

    LIST_INIT(GET_OBJ_LISTHEAD(engine));
}

void create_object(void)
{
    engine_t *engine = get_engine();

    engine->object = malloc(sizeof(object_t));
    create_environement();
    create_planes();
}
