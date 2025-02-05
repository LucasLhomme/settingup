/*
** EPITECH PROJECT, 2024
** putstr
** File description:
** putstr
*/
#include <unistd.h>
#include "lib.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
