/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** destroy
*/
#include <SFML/Graphics.h>
#include "../includes/framebuffer.h"
#include <stdlib.h>

void framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    framebuffer->height = 0;
    framebuffer->width = 0;
    free(framebuffer);
}
