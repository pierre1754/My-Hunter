/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

poland_invasion_t *create_poland(void)
{
    static poland_invasion_t *poland = NULL;

    if (!poland)
        poland = malloc(sizeof(poland_invasion_t));
    return poland;
}
