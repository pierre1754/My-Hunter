/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void create_window(void)
{
    engine_t *engine = get_engine();
    sfVideoMode mode = {1920, 1080, 32};

    engine->window = malloc(sizeof(window_t));
    GET_WINDOW(engine) = sfRenderWindow_create(mode,
                                            "My Hunter",
                                            sfVideoMode_isValid(mode) ?
                                            sfFullscreen : sfClose,
                                            NULL);
    sfRenderWindow_setVerticalSyncEnabled(GET_WINDOW(engine), sfTrue);
    GET_WINDOW_SIZE(engine) = (sfVector2f) {mode.width, mode.height};
}

void destroy_window(void)
{
    engine_t *engine = get_engine();

    sfRenderWindow_destroy(GET_WINDOW(engine));
    free(engine->window);
}
