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
#define GET_OBJ_ENV_CANON_BUFF_EXP(engine) (engine->object->environement->canon->buff_exp)
#define GET_OBJ_ENV_CANON_IMG(engine) (engine->object->environement->canon->canon)
#define GET_OBJ_ENV_CANON_REC(engine) (engine->object->environement->canon->rect)
#define GET_OBJ_ENV_CANON_EXP(engine) (engine->object->environement->canon->explosion)
#define GET_OBJ_ENV_CANON_EXP_BOOL(engine) (engine->object->environement->canon->is_draw)
#define GET_CANON_TIME(engine) (engine->object->environement->canon->time_needed)

#define GET_OBJ_ENV_BUTTON_BUFF(engine) (engine->object->environement->button->buff)
#define GET_OBJ_ENV_BUTTON_IMG(engine) (engine->object->environement->button->button)
#define GET_OBJ_ENV_BUTTON(engine) (engine->object->environement->button)

#define GET_MOUSE_POS(engine) (engine->object->mouse_position)

#define GET_OBJ_LISTHEAD(engine) (&engine->object->planes)

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
    sfTexture *buff_exp;
    sfSprite *canon;
    sfSprite *explosion;
    sfIntRect rect;
    int is_draw;
    float time_needed;
} canon_t;

typedef struct {
    sfTexture *buff;
    sfSprite *button;
} quit_button_t;

typedef struct {
    background_t *background;
    aim_t *aim;
    canon_t *canon;
    quit_button_t *button;
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
    sfVector2f mouse_position;
} object_t;

plane_t *create_plane(void);
void create_environement(void);
void create_object(void);

void set_sprite_loop(void);
void set_sprite_planes(void);

void move_planes(void);

void destroy_object(void);

#endif // OBJECT_H
