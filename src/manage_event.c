/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** manage events
*/
#include "../includes/my.h"
#include <stdlib.h>

int hitbox(sfVector2i mouse, sfVector2f posisprite)
{
    if (posisprite.x <= mouse.x + 110 &&
        posisprite.x >= mouse.x - 110 &&
        posisprite.y <= mouse.y + 110 &&
        posisprite.y >= mouse.y - 110)
        return 1;
    else
        return 0;
}

game_info killed(sfRenderWindow *window, game_info general)
{
    sfVector2i mouse =
        sfMouse_getPositionRenderWindow(window);
    sfVector2f posisprite =
        sfSprite_getPosition(general.sprite);
    if (hitbox(mouse, posisprite) == 1) {
        general.score ++;
        general.move.x += 2;
        general.reset.y = (rand() % (659 - 0 + 1));
        sfSprite_setPosition(general.sprite, general.reset);
    }
        return general;
}

game_info duck_reset(game_info general)
{
    if (general.duckposi.x >= 1270) {
        general.life --;
        general.move.x /= 2;
        general.reset.y = (rand() % (659 - 0 + 1));
        my_putnbr(general.life);
        my_putstr("Lives Left\n");
        sfSprite_setPosition(general.sprite, general.reset);
    }
    return general;
}

game_info manage_event(sfRenderWindow *window, sfEvent event,
    game_info general)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (sfMouse_isButtonPressed(sfMouseLeft))
            general = killed(window, general);
        else if (event.type == sfEvtClosed) {
            my_putstr("\nGG You Scored: ");
            my_putnbr(general.score);
            my_putstr(" ducks\n");
            sfRenderWindow_close(window);
        }
    }
    general = duck_reset(general);
    if (general.life == 0) {
        my_putstr("You loosed\n scored: ");
        my_putnbr(general.score);
        my_putstr(" ducks\n");
        sfRenderWindow_close(window);
    }
    return general;
}
