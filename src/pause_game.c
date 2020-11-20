/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

static void draw_pause(void)
{
    engine_t *engine = get_engine();

    sfSprite_setPosition(GET_OBJ_ENV_BUTTON_IMG(engine),
                        (sfVector2f) {GET_WINDOW_SIZE(engine).x / 2,
                        GET_WINDOW_SIZE(engine).y / 2});
    sfRenderWindow_drawSprite(GET_WINDOW(engine),
                            GET_OBJ_ENV_BUTTON_IMG(engine),
                            NULL);
    sfRenderWindow_display(GET_WINDOW(engine));
}

static int pause_event(void)
{
    engine_t *engine = get_engine();
    sfVector2i pos_mouse = {0};

    while (sfRenderWindow_pollEvent(GET_WINDOW(engine),
                                            &engine->event)) {
        if (engine->event.type == sfEvtMouseButtonPressed) {
            pos_mouse = sfMouse_getPositionRenderWindow(GET_WINDOW(engine));
            if ((pos_mouse.x >= 512 && pos_mouse.x <= 1408) &&
                (pos_mouse.y >= 384 && pos_mouse.y <= 696)) {
                sfRenderWindow_close(GET_WINDOW(engine));
                return 1;
            }
            else return 2;
        }
    }
    return 0;
}

int pause_game(void)
{
    engine_t *engine = get_engine();

    if (engine->event.type == sfEvtKeyPressed) {
        draw_pause();
        while (engine->event.key.code != sfKeyEscape) {
            if (pause_event() == 1) {
                return 1;
            }
            else if (pause_event() == 2)
                return 0;
        }
    }
    return 0;
}
