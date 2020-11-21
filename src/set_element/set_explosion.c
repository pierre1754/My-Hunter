/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

void create_explosion(void)
{
    engine_t *engine = get_engine();

    GET_EXP(engine) = malloc(sizeof(explosion_t));
    GET_EXP_IMG(engine) = sfSprite_create();
    GET_EXP_TEXTURE(engine) =
    sfTexture_createFromFile("asset/plane_exp_1024_256.png", NULL);
    sfSprite_setTexture(GET_EXP_IMG(engine), GET_EXP_TEXTURE(engine), sfTrue);
    GET_EXP_RECT(engine) = (sfIntRect){0, 0, 256, 256};
    GET_EXP_SOUND(engine) = sfSound_create();
    GET_EXP_BUFF(engine) =
    sfSoundBuffer_createFromFile("asset/explosion_sound.ogg");
    sfSound_setBuffer(GET_EXP_SOUND(engine), GET_EXP_BUFF(engine));
    sfSprite_setTextureRect(GET_EXP_IMG(engine), GET_EXP_RECT(engine));
    GET_EXP_POS(engine) = (sfVector2f){0, 0};
    GET_EXP_BOOL(engine) = 0;
}
