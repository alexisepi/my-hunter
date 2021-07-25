/*
** EPITECH PROJECT, 2020
** libheader
** File description:
** my
*/
#include <SFML/Graphics.h>
#include "framebuffer.h"
#include <stdarg.h>
#include <time.h>
#include <SFML/System/Vector2.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Window/Types.h>

//structs
typedef struct {
    sfSprite *sprite;
    sfVector2f move;
    sfVector2f duckposi;
    sfVector2f reset;
    int score;
    int life;
    sfClock *clock;
    sfIntRect rect;
    sfTime time;
    float seconds;
} game_info;

//graphs
sfRenderWindow *my_creatwin(char *title, unsigned int width,
    unsigned int height);
void my_draw_square(framebuffer_t *buffer, sfVector2u position,
    unsigned int size, sfColor color);
void close_window(sfRenderWindow *window, sfEvent event, int score);
void my_draw_square(framebuffer_t *buffer, sfVector2u position,
    unsigned int size, sfColor color);
sfRenderWindow *my_createwin(char *title,
    unsigned int width, unsigned int height);
int manage_mouse_click(sfRenderWindow *window, sfEvent event, sfIntRect rect);
void move_rect(sfIntRect *rect, int offset, int max_value);
game_info timing_org(game_info general);
game_info manage_event(sfRenderWindow *window, sfEvent event,
    game_info general);

//c pool funcs
int my_compute_power_rec(int nb, int p);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
char *my_strstr(char *str, char const *to_find);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isalpha(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);
char *my_strcapitalize(char *str);
void my_sort_int_array(int *array, int size);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_revstr(char *str);
void my_putstr(char *str);
int my_putnbr(int n);
void my_putchar(char c);
int my_notconststrlen(char *str);
char *my_notconststrcat(char *dest, char *src);
int my_is_prime(int nb);
int my_isneg(int n);
int my_strlen(char const *str);
int my_find_prime_sup(int nb);
int my_compute_square_root(int nb);
int my_getnbr(char *str);
void my_putnbr_base(int n, char *base);
void my_uputnbr_base(unsigned int n, char *base);
