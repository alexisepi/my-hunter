/*
** EPITECH PROJECT, 2020
** csfml
** File description:
** window
*/
#include <SFML/Graphics.h>

sfRenderWindow *my_creatwin(char *title, unsigned int width,
    unsigned int height)
{
    sfVideoMode video_mode;
    sfEvent event;
    sfRenderWindow *window;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, title,
        sfClose | sfResize, NULL);
    return window;
}
