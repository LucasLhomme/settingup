/*
** EPITECH PROJECT, 2024
** putstr
** File description:
** putstr
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    int test = 0;

    while (str[test] != '\0') {
        my_putchar(str[test]);
        test++;
    }
    return 0;
}
