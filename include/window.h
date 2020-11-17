/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>

#define GET_WINDOW(engine) (engine->window->window)

typedef struct {
    sfRenderWindow *window;
    sfVector2f window_size;
} window_t;



#endif // WINDOW_H
