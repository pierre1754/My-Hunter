/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

static void destroy_environement(void)
{
    engine_t *engine = get_engine();

    sfSprite_destroy(GET_OBJ_ENV_BACKGROUND_IMG(engine));
    sfTexture_destroy(GET_OBJ_ENV_BACKGROUND_BUFF(engine));
    free(GET_OBJ_ENV_BACKGROUND(engine));
    sfSprite_destroy(GET_OBJ_ENV_AIM_IMG(engine));
    sfTexture_destroy(GET_OBJ_ENV_AIM_BUFF(engine));
    free(GET_OBJ_ENV_AIM(engine));
    sfSprite_destroy(GET_OBJ_ENV_CANON_IMG(engine));
    sfTexture_destroy(GET_OBJ_ENV_CANON_BUFF(engine));
    free(GET_OBJ_ENV_CANON(engine));
    free(GET_OBJ_ENV(engine));
}

void destroy_object(void)
{
    engine_t *engine = get_engine();

    destroy_environement();
    // ADD DESTROY PLANE
    free(engine->object);
}

void destroy_engine(void)
{
    engine_t *engine = get_engine();

    destroy_window();
    destroy_asset();
    destroy_object();
}
