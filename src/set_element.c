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
                        (sfVector2f) {GET_MOUSE_POS(engine).x, 797});
    sfSprite_setPosition(GET_OBJ_ENV_AIM_IMG(engine), GET_MOUSE_POS(engine));
    sfSprite_setPosition(GET_OBJ_ENV_CANON_EXP(engine),
                        (sfVector2f) {GET_MOUSE_POS(engine).x, 797});
    GET_CANON_TIME(engine) += (GET_ELAPSED(engine));
}

void set_sprite_loop(void)
{
    engine_t *engine = get_engine();

    GET_OBJ_ENV_CANON_REC(engine).left =
    (GET_OBJ_ENV_CANON_REC(engine).left + 193) % 3667;
    sfSprite_setTextureRect(GET_OBJ_ENV_CANON_EXP(engine),
                            GET_OBJ_ENV_CANON_REC(engine));
}

void set_sprite_planes(void)
{
    engine_t *engine = get_engine();
    plane_t *plane;

    LIST_FOREACH(plane, GET_OBJ_LISTHEAD(engine), entries) {
        plane->rectangle_texture.left =
        (plane->rectangle_texture.left + 232) % 464;
        sfSprite_setTextureRect(plane->plane,
                                plane->rectangle_texture);
    }
}

void set_new_plane(void)
{
    engine_t *engine = get_engine();
    plane_t *plane;
    int rand_nbr = rand() % 100;
    static float time_needed = 0;

    time_needed += GET_ELAPSED(engine);
    if (time_needed < 0.5)
        return;
    time_needed = 0;
    if (rand_nbr > 25)
        return;
    plane = create_plane();
    LIST_INSERT_HEAD(GET_OBJ_LISTHEAD(engine), plane, entries);
}

void set_element(void)
{
    engine_t *engine = get_engine();
    static float time_needed = 1;

    time_needed += GET_ELAPSED(engine);
    set_new_plane();
    if (time_needed > 0.2) {
        set_sprite_explosion();
        time_needed = 0;
    }
    set_image_pos();
}
