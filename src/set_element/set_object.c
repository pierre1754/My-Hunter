/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

// void create_planes(void)
// {
//     engine_t *engine = get_engine();

//     GET_OBJ_LISTHEAD(engine) = LIST_HEAD_INITIALIZER(planes);
// }

void create_object(void)
{
    engine_t *engine = get_engine();

    engine->object = malloc(sizeof(object_t));
    create_environement();
    // create_planes();
}
