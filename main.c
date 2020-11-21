/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

int main()
{
    srand(time(NULL));
    create_engine();
    init_element();
    start_engine();
    destroy_engine();
    return 0;
}
