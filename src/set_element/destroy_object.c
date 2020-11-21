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
    sfSprite_destroy(GET_OBJ_ENV_BUTTON_IMG(engine));
    sfTexture_destroy(GET_OBJ_ENV_BUTTON_BUFF(engine));
    free(GET_OBJ_ENV_BUTTON(engine));
    free(GET_OBJ_ENV(engine));
}

void destroy_planes(void)
{
    engine_t *engine = get_engine();
    plane_t *plane;

    while (!LIST_EMPTY(GET_OBJ_LISTHEAD(engine))) {
        plane = LIST_FIRST(GET_OBJ_LISTHEAD(engine));
        LIST_REMOVE(plane, entries);
        sfSprite_destroy(plane->plane);
        free(plane);
    }
}

void destroy_explosion(void)
{
    engine_t *engine = get_engine();

    sfSprite_destroy(GET_EXP_IMG(engine));
    sfTexture_destroy(GET_EXP_TEXTURE(engine));
    sfSound_destroy(GET_EXP_SOUND(engine));
    sfSoundBuffer_destroy(GET_EXP_BUFF(engine));
    free(GET_EXP(engine));
}

void destroy_object(void)
{
    engine_t *engine = get_engine();

    destroy_environement();
    destroy_planes();
    destroy_explosion();
    free(engine->object);
}
