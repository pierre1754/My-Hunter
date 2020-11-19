/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

static void destroy_environement(void)
{
    // DESTROY ENV AND SET PLANE
}

void destroy_object(void)
{
    engine_t *engine = get_engine();

    destroy_environement();
}

void destroy_engine(void)
{
    engine_t *engine = get_engine();

    destroy_window();
    destroy_asset();
    destroy_object();
}
