/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef MY_HUNTER_H
#define MY_HUNTER_H

#include "my.h"

#include "window.h"
#include "asset.h"
#include "object.h"

#define GET_CLOCK(engine) (engine->time->clock)
#define GET_ELAPSED(engine) (engine->time->time_elapsed)

typedef struct {
    char help;
    char describe;
} opt_t;

typedef struct {
    sfClock *clock;
    float time_elapsed;
} time_elapsed_t;

typedef struct {
    window_t *window;
    asset_t *asset;
    object_t *object;
    sfEvent event;
    time_elapsed_t *time;
} engine_t;

int flag(int ac, char **av);

engine_t *get_engine(void);

void create_time();
void create_engine(void);

void init_origin_img(void);
void init_music(void);
void init_element(void);

void get_mouse_pos(void);
void get_event(void);
void get_time(void);
void get_element(void);

void set_image_pos(void);
void set_element(void);

void draw_element(void);
void start_engine(void);

void destroy_engine(void);

#endif // MY_HUNTER_H
