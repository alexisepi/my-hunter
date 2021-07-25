/*
** EPITECH PROJECT, 2020
** put_pixel
** File description:
** set framebuffer's pixel colors
*/
#include <SFML/Graphics.h>
#include "../includes/framebuffer.h"

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
    unsigned int y, sfColor color)
{
    unsigned int i = (framebuffer->height * (y - 1)) + x;

    framebuffer->pixels[i] = color.r;
    framebuffer->pixels[i + 1] = color.g;
    framebuffer->pixels[i + 2] = color.b;
    framebuffer->pixels[i + 3] = color.a;
}
