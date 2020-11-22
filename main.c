/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

int main(int argc, char **argv)
{
    poland_invasion_t *poland = create_poland();

    if (argc > 2)
        return 84;
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'p')
        poland->bool = 1;
    else if (argc == 2)
        return flag(argv);
    srand(time(NULL));
    create_engine();
    init_element();
    start_engine();
    destroy_engine();
    return 0;
}
