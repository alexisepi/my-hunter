/*
** EPITECH PROJECT, 2020
** drawsquare
** File description:
** in framebuffer
*/
#include <SFML/Graphics.h>
#include "../includes/framebuffer.h"

void my_draw_square(framebuffer_t *buffer, sfVector2u position,
    unsigned int size, sfColor color)
{
    unsigned int county = 0;
    unsigned int y = position.y + county;

    for (int i = 0; i != size; i++) {
        for (int a = 0; a != size; a++) {
            my_put_pixel(buffer, position.x, y, color);
            position.x += 1;
        }
        position.x -= size;
        county ++;
    }
}
