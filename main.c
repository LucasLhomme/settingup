/*
** EPITECH PROJECT, 2024
** Main settingup
** File description:
** Main of settingup
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <dirent.h>
#include "../include/my.h"
#include "../include/flags.h"

int main(int argc, char *argv[])
{
    char *filepath = argv[1];
    int x = 0;
    int result = fs_open_file(filepath, x);

    if (argc != 3) {
        return 84;
    }
    for (int i = 0; argv[2][i] != '\0'; i++) {
        x = x * 10 + (argv[2][i] - '0');
    }
    if (result == -1) {
        return 84;
    }
    return result;
}
