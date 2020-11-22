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

#define CHECK_POS_X(engine, plane) (GET_MOUSE_POS(engine).x >= plane->position.x && GET_MOUSE_POS(engine).x <= plane->position.x + 232)
#define CHECK_POS_Y(engine, plane) (GET_MOUSE_POS(engine).y >= plane->position.y && GET_MOUSE_POS(engine).y <= plane->position.y + 102)

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

typedef struct {
    char bool;
} poland_invasion_t;

int flag(char **av);

engine_t *get_engine(void);
poland_invasion_t *create_poland(void);

void create_time();
void create_engine(void);

void init_plane(void);
void init_origin_img(void);
void init_cursor(void);
void init_music(void);
void init_element(void);

int pause_game(void);

void get_mouse_pos(void);
void get_event(void);
void get_time(void);
void get_element(void);

void set_image_pos(void);
void set_element(void);

void draw_planes(void);
void draw_plane_exp(void);
void draw_explosion(void);
void draw_background(void);
void draw_sprite(void);
void draw_element(void);

void start_engine(void);

void destroy_engine(void);

#endif // MY_HUNTER_H
