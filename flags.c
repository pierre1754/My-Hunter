/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

int flag(int ac, char **av)
{
    if (av[1][0] != '-' || av[1][1] != 'h')
        return 84;
    write(0, "USAGES\n   ./my_hunter\n\n", 23);
    write(0, "DECRIPTION\n   A duck hunt game, but better.\n", 44);
    write(0, "   Press any key to pause the game.\n", 36);
    write(0, "   And click on QUIT button to leave the game.\n", 47);
    write(0, "   To resume the game, click on the background.\n", 48);
    return 0;
}
