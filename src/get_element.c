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

    if (engine->event.type == sfEvtClosed ||
        engine->event.key.code == sfKeyEscape) {
        sfRenderWindow_close(GET_WINDOW(engine));
    }
    if (engine->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(GET_ASSET_SOUND_VAR(engine, soundShot));
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
