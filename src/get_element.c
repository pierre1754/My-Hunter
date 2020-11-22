/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void get_event(void)
{
    engine_t *engine = get_engine();
    plane_t *plane;
    plane_t *temp_plane;

    if (engine->event.type == sfEvtMouseButtonPressed &&
        GET_CANON_TIME(engine) > 1.5) {
        sfSound_play(GET_ASSET_SOUND_VAR(engine, soundShot));
        GET_OBJ_ENV_CANON_EXP_BOOL(engine) = 1;
        GET_CANON_TIME(engine) = 0;
        LIST_FOREACH_SAFE(plane,
                            GET_OBJ_LISTHEAD(engine), entries, temp_plane) {
            if (CHECK_POS_X(engine, plane) && CHECK_POS_Y(engine, plane)) {
                set_explosion(plane);
                destroy_plane(plane);
            }
        }
    }
}

void get_mouse_pos(void)
{
    engine_t *engine = get_engine();
    sfVector2i vector = sfMouse_getPositionRenderWindow(GET_WINDOW(engine));

    GET_MOUSE_POS(engine).x = (float) vector.x;
    GET_MOUSE_POS(engine).y = (float) vector.y;
}

void get_time(void)
{
    engine_t *engine = get_engine();

    GET_ELAPSED(engine) = sfTime_asSeconds(sfClock_restart(GET_CLOCK(engine)));
}

void get_element(void)
{
    get_time();
    get_mouse_pos();
}
