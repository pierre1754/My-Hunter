/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_hunter.h"

static void get_flags(int ac, char **av, opt_t *res)
{
    const char *flags = "hd";
    int opt_res;

    do {
        opt_res = getopt(ac, av, flags);
        switch (opt_res) {
            case 'h':
                res->help = 1;
            break;
            case 'd':
                res->describe = 1;
            break;
        }
    } while (opt_res != -1);
}

int flag(int ac, char **av)
{
    opt_t options = {0};

    get_flags(ac, av, &options);
    if (options.describe) {
        write(0, "./my_hunter\n", 12);
        write(0, "The hunt game can begin.\n", 25);
    }
    else if (options.help) {
        write(0, "USAGES\n   ./my_hunter\n\n", 23);
        write(0, "DECRIPTION\n   A duck hunt game, but better.\n", 44);
        return 1;
    }
    return 0;
}
