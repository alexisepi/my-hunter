/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** return strings lenght
*/
#include <stddef.h>

int my_strlen(char const *str)
{
    int count = 0;
    if (str == NULL) {
        return 0;
    }
    else {
        for (int i = 0; str[i] != '\0';i++) {
            count++;
        }
    }
    return count;
}
