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
            if ((pos_mouse.x >= 792 && pos_mouse.x <= 1129) &&
                (pos_mouse.y >= 435 && pos_mouse.y <= 644)) {
                sfRenderWindow_close(GET_WINDOW(engine));
                return 1;
            }
            else return 2;
        }
    }
    return 0;
}

static void set_pause(void)
{
    engine_t *engine = get_engine();

    draw_pause();
    sfRenderWindow_setMouseCursorVisible(GET_WINDOW(engine), sfTrue);
    sfMusic_pause(GET_ASSET_AMBIANCE(engine));
}

static int is_paused(void)
{
    engine_t *engine = get_engine();
    int res_pause = pause_event();

    if (res_pause != 0) {
        sfMusic_play(GET_ASSET_AMBIANCE(engine));
        sfRenderWindow_setMouseCursorVisible(GET_WINDOW(engine), sfFalse);
        sfClock_restart(GET_CLOCK(engine));
        return res_pause;
    }
    return 0;
}

int pause_game(void)
{
    engine_t *engine = get_engine();
    int res_is_paused = 0;

    if (engine->event.type == sfEvtKeyPressed) {
        set_pause();
        while (1) {
            res_is_paused = is_paused();
            if (res_is_paused == 1)
                return res_is_paused;
            else if (res_is_paused == 2)
                return 0;
            sfSleep(sfSeconds(0.016));
        }
        sfMusic_play(GET_ASSET_AMBIANCE(engine));
        sfRenderWindow_setMouseCursorVisible(GET_WINDOW(engine), sfFalse);
        sfClock_restart(GET_CLOCK(engine));
    }
    return 0;
}
