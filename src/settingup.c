/*
** EPITECH PROJECT, 2024
** Setting Up
** File description:
** Setting up
*/
#include <fcntl.h>

int fs_open_file(char const *filepath, int x)
{
    char buffer[30000];
    int fd = open(filepath, O_RDONLY);
    read(fd, buffer, x);
    printf("%s", buffer);
    close(fd);
    return 0;
}