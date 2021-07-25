/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** move rect
*/
#include <SFML/Graphics.h>
#include "../includes/my.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left == max_value)
        rect->left = 0;
    else
        rect->left += offset;
}