/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** time management
*/
#include "../includes/my.h"
#include <stdlib.h>

game_info timing_org(game_info general)
{
    if (general.seconds > 0.06) {
        if (general.seconds > 0.001666) {
            move_rect(&general.rect, 110, 220);
            sfSprite_setTextureRect(general.sprite,
                                    general.rect);
        }
        general.reset.y = (rand() % (659 - 0 + 1));
        sfSprite_move(general.sprite, general.move);
        general.duckposi = sfSprite_getPosition(general.sprite);
        sfClock_restart(general.clock);
    }
    return general;
}
