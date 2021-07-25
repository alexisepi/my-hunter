/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** display string
*/
#include <stddef.h>
#include "my.h"

void my_putstr(char *str)
{
    int size = my_strlen(str);

    if (str == NULL) {
        my_putstr("str_is_null");
    }
    else {
        for (int i = 0; i < size; i++) {
            my_putchar(str[i]);
        }
    }
}
