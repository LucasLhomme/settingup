/*
** EPITECH PROJECT, 2024
** Setting Up
** File description:
** Setting up
*/
#include <fcntl.h>
#include <stdio.h>

int fs_open_file(char const *filepath, int x)
{
    char buffer[30000];
    int fd = open(filepath, O_RDONLY);
    int i = 0;

    read(fd, buffer, x);
    for (; i < x; i++)
    {
        if (buffer[i] == '\n')
        {
            buffer[i] = '\0';
        }   
    }
    printf("%i\n", i);
    printf("%s", buffer);
    close(fd);
    return 0;
}
