/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

// SEE FOR LITTLE PANNEL

void start_engine(void)
{
    engine_t *engine = get_engine();

    while (sfRenderWindow_isOpen(GET_WINDOW(engine))) {
        while (sfRenderWindow_pollEvent(GET_WINDOW(engine), &engine->event)) {
            if (engine->event.type == sfEvtClosed) {
                sfRenderWindow_close(GET_WINDOW(engine));
            } else if (engine->event.key.code == sfKeyEscape) {
                sfRenderWindow_close(GET_WINDOW(engine));
            }
        }
        get_mouse_pos();
        sfSprite_setPosition(GET_OBJ_ENV_AIM_IMG(engine), GET_MOUSE_POS(engine));
        draw_element();
    }
}
