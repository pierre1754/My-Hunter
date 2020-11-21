/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

static void create_background(void)
{
    engine_t *engine = get_engine();

    GET_OBJ_ENV_BACKGROUND(engine) = malloc(sizeof(background_t));
    GET_OBJ_ENV_BACKGROUND_BUFF(engine) =
    sfTexture_createFromFile("asset/background.png", NULL);
    GET_OBJ_ENV_BACKGROUND_IMG(engine) = sfSprite_create();
    sfSprite_setTexture(GET_OBJ_ENV_BACKGROUND_IMG(engine),
                        GET_OBJ_ENV_BACKGROUND_BUFF(engine),
                        sfTrue);
}

static void create_aim(void)
{
    engine_t *engine = get_engine();

    GET_OBJ_ENV_AIM(engine) = malloc(sizeof(aim_t));
    GET_OBJ_ENV_AIM_BUFF(engine) =
    sfTexture_createFromFile("asset/aim.png", NULL);
    GET_OBJ_ENV_AIM_IMG(engine) = sfSprite_create();
    sfSprite_setTexture(GET_OBJ_ENV_AIM_IMG(engine),
                        GET_OBJ_ENV_AIM_BUFF(engine),
                        sfTrue);
    sfSprite_setScale(GET_OBJ_ENV_AIM_IMG(engine), (sfVector2f){0.3f, 0.3f});
}

static void create_canon(void)
{
    engine_t *engine = get_engine();

    GET_OBJ_ENV_CANON(engine) = malloc(sizeof(canon_t));
    GET_OBJ_ENV_CANON_BUFF(engine) =
    sfTexture_createFromFile("asset/canon.png", NULL);
    GET_OBJ_ENV_CANON_BUFF_EXP(engine) =
    sfTexture_createFromFile("asset/explosion_canon.png", NULL);
    GET_OBJ_ENV_CANON_IMG(engine) = sfSprite_create();
    GET_OBJ_ENV_CANON_EXP(engine) = sfSprite_create();
    sfSprite_setTexture(GET_OBJ_ENV_CANON_IMG(engine),
                        GET_OBJ_ENV_CANON_BUFF(engine),
                        sfTrue);
    sfSprite_setTexture(GET_OBJ_ENV_CANON_EXP(engine),
                        GET_OBJ_ENV_CANON_BUFF_EXP(engine),
                        sfTrue);
    GET_OBJ_ENV_CANON_REC(engine) = (sfIntRect) {0, 0, 193, 205};
    sfSprite_setTextureRect(GET_OBJ_ENV_CANON_EXP(engine),
                            GET_OBJ_ENV_CANON_REC(engine));
    GET_OBJ_ENV_CANON_EXP_BOOL(engine) = 0;
    GET_CANON_TIME(engine) = 0;
}

static void create_button(void)
{
    engine_t *engine = get_engine();

    GET_OBJ_ENV_BUTTON(engine) = malloc(sizeof(quit_button_t));
    GET_OBJ_ENV_BUTTON_BUFF(engine) =
    sfTexture_createFromFile("asset/quit_button.png", NULL);
    GET_OBJ_ENV_BUTTON_IMG(engine) = sfSprite_create();
    sfSprite_setTexture(GET_OBJ_ENV_BUTTON_IMG(engine),
                        GET_OBJ_ENV_BUTTON_BUFF(engine),
                        sfTrue);
}

void create_environement(void)
{
    engine_t *engine = get_engine();

    GET_OBJ_ENV(engine) = malloc(sizeof(environement_t));
    create_background();
    create_aim();
    create_canon();
    create_button();
}
