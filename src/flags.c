/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** 02/10/2020
*/

#include "screensaver.h"

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

// TODO

int flag(int ac, char **av)
{
    opt_t options = {0};

    get_flags(ac, av, &options);
    if (options.describe) {
        write(0, "./my_hunter\n", 14);
        write(0, "The hunt game can begin.\n", 26);
    }
    else if (options.help) {
        write(0, "USAGES\n   ./my_hunter\n\n", 24);
        write(0, "DECRIPTION\n   A duck hunt game, but in better.\n", 48);
        return 1;
    }
    return 0;
}
