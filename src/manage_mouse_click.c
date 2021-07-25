/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** mouse click events
*/
#include <SFML/Graphics.h>
#include <SFML/Window/Mouse.h>
#include "../includes/my.h"

int manage_mouse_click(sfRenderWindow *window,
    sfEvent event, sfIntRect rect)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (sfMouse_isButtonPressed(sfMouseLeft) &&
            hit(window, rect) == 1) {
            return 1;
        }
    }
    return 0;
}
