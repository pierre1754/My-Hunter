/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

int main(int argc, char **argv)
{
    if (argc > 2)
        return 84;
    if (argc == 2)
        return flag(argc, argv);
    srand(time(NULL));
    create_engine();
    init_element();
    start_engine();
    destroy_engine();
    return 0;
}
