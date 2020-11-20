/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void draw_explosion(void)
{
    engine_t *engine = get_engine();
    static float refresh_time = 0;
    static float time_printable = 0;

    refresh_time += GET_ELAPSED(engine);
    if (GET_OBJ_ENV_CANON_EXP_BOOL(engine)) {
        if (refresh_time > 0.05) {
            set_sprite_loop();
            refresh_time = 0;
            time_printable ++;
        }
        sfRenderWindow_drawSprite(GET_WINDOW(engine),
                                GET_OBJ_ENV_CANON_EXP(engine),
                                NULL);
    }
    if (time_printable > 17) {
        GET_OBJ_ENV_CANON_EXP_BOOL(engine) = 0;
        GET_OBJ_ENV_CANON_REC(engine).left = 0;
        refresh_time = 0;
        time_printable = 0;
    }
}

void draw_sprite(void)
{
    engine_t *engine = get_engine();

    sfRenderWindow_drawSprite(GET_WINDOW(engine),
                            GET_OBJ_ENV_BACKGROUND_IMG(engine),
                            NULL);
    sfRenderWindow_drawSprite(GET_WINDOW(engine),
                            GET_OBJ_ENV_AIM_IMG(engine),
                            NULL);
    sfRenderWindow_drawSprite(GET_WINDOW(engine),
                            GET_OBJ_ENV_CANON_IMG(engine),
                            NULL);
}


void draw_element(void)
{
    engine_t *engine = get_engine();

    sfRenderWindow_clear(GET_WINDOW(engine), sfBlack);
    draw_sprite();
    draw_explosion();
    sfRenderWindow_display(GET_WINDOW(engine));
}
