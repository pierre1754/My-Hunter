/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

engine_t *get_engine(void)
{
    static engine_t *engine = NULL;

    if (!engine)
        engine = malloc(sizeof(engine_t));
    return engine;
}

// void create_time()
{
    engine_t *engine = get_engine();

    engine->time = malloc(sizeof(time_elapsed_t));
    GET_CLOCK(engine) = sfClock_create();
}

void create_engine(void)
{
    engine_t *engine = get_engine();

    create_window();
    create_asset();
    create_object();
    create_time();
}
