/*
** EPITECH PROJECT, 2020
** create struct framebuffer
** File description:
** create
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../includes/framebuffer.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer;

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(width * height * 32 / 8);

    return framebuffer;
}