/*
** EPITECH PROJECT, 2024
** Setting Up
** File description:
** Setting up
*/
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/flags.h"

int errorhand(int fd, char buffer, int x, int bytesread)
{

    if (fd == -1) {
        return 84;
    }
    if (bytesread == -1) {
        close(fd);
        return 84;
    }
}

int fs_open_file(char const *filepath, int x)
{
    char buffer[30000];
    int fd = open(filepath, O_RDONLY);
    int bytesread = read(fd, buffer, x);
    int i = 0;

    if (fd == -1)
        errorhand(fd, buffer[0], bytesread, x);
    if (bytesread == -1)
        errorhand(fd, buffer[0], bytesread, x);
    for (; i < bytesread; i++) {
        if (buffer[i] == '\n')
            buffer[i] = '\0';
    }
    my_printf("%i\n", i);
    my_printf("%s", buffer);
    close(fd);
    return 0;
}
