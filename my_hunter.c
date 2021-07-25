/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** [file description here]
*/
#include <SFML/Graphics.h>
#include <SFML/Window/Mouse.h>
#include <SFML/System/Vector2.h>
#include "includes/my.h"
#include <time.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Window/Types.h>
#include <stdlib.h>

sfRenderWindow *my_creatwin(char *title, unsigned int width,
    unsigned int height);
int hit( sfRenderWindow *window, sfIntRect rect);

void desc(char const *av, int ac)
{
    if (av == "-h" || ac == 2) {
        my_putstr("\nThis game is a light version of DuckHunt,\n");
        my_putstr("You must shoot as many ducks as possible with the ");
        my_putstr("leftclick\n");
        my_putstr("You got 3 lives,");
        my_putstr("if a duck reaches the end of the screen you will ");
        my_putstr("loose one\n");
        my_putstr("Good Luck Have Fun\n");
    }
}

game_info gameplay(game_info general, sfRenderWindow *window,
    sfSprite *back, sfEvent event)
{
    general = manage_event(window, event, general);
    general.time = sfClock_getElapsedTime(general.clock);
    general.duckposi = sfSprite_getPosition(general.sprite);
    general.seconds = general.time.microseconds / 1000000.0;
    general = timing_org(general);
    sfRenderWindow_clear(window, sfTransparent);
    sfRenderWindow_drawSprite(window, back, NULL);
    sfRenderWindow_drawSprite(window, general.sprite, NULL);
    sfRenderWindow_display(window);
    return general;
}

int main(int ac, char const **av)
{
    desc(av[1], ac);
    sfRenderWindow *window = my_creatwin("duckanime", 1280, 769);
    sfTexture *texture = sfTexture_createFromFile("pngs/duck.png", NULL);
    sfTexture *map = sfTexture_createFromFile("pngs/stage.png", NULL);
    game_info general = {sfSprite_create(), {30,0}
        ,sfSprite_getPosition(general.sprite), {0, 0}, 0, 3, sfClock_create(),
    {0, 0, 110, 110}};
    sfSprite *back = sfSprite_create();
    sfEvent event;

    sfRenderWindow_setFramerateLimit(window, 144);
    sfSprite_setTexture(general.sprite, texture, sfTrue);
    sfSprite_setTexture(back, map, sfTrue);
    sfSprite_setTextureRect(general.sprite, general.rect);
    while (sfRenderWindow_isOpen(window))
        general = gameplay(general, window, back, event);
    sfSprite_destroy(general.sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}
