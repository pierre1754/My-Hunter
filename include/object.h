/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef OBJECT_H
#define OBJECT_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <sys/queue.h>

#define GET_OBJ_ENV(engine) (engine->object->environement)

#define GET_OBJ_ENV_BACKGROUND(engine) (engine->object->environement->background)

#define GET_OBJ_ENV_BACKGROUND_BUFF(engine) (engine->object->environement->background->buff)
#define GET_OBJ_ENV_BACKGROUND_IMG(engine) (engine->object->environement->background->background)

#define GET_OBJ_ENV_AIM(engine) (engine->object->environement->aim)

#define GET_OBJ_ENV_AIM_BUFF(engine) (engine->object->environement->aim->buff)
#define GET_OBJ_ENV_AIM_IMG(engine) (engine->object->environement->aim->aim)

#define GET_OBJ_ENV_CANON(engine) (engine->object->environement->canon)

#define GET_OBJ_ENV_CANON_BUFF(engine) (engine->object->environement->canon->buff)
#define GET_OBJ_ENV_CANON_IMG(engine) (engine->object->environement->canon->canon)

typedef struct {
    sfTexture *buff;
    sfSprite *background;
} background_t;

typedef struct {
    sfTexture *buff;
    sfSprite *aim;
} aim_t;

typedef struct {
    sfTexture *buff;
    sfSprite *canon;
    sfVector2f deplacement;
} canon_t;

typedef struct {
    background_t *background;
    aim_t *aim;
    canon_t *canon;
} environement_t;

typedef struct plane_s {
    sfSprite *plane;
    sfIntRect rectangle_texture;
    sfVector2f deplacement;
    sfVector2f position;
    LIST_ENTRY(plane_s) entries;
} plane_t;

typedef struct {
    environement_t *environement;
    LIST_HEAD(, plane_s) planes;
} object_t;

void create_object(void);
void destroy_object(void);

#endif // OBJECT_H
