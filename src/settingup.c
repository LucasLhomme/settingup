/*
** EPITECH PROJECT, 2024
** Setting Up
** File description:
** Setting up
*/
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int fs_open_file(char const *filepath, int x)
{
    char buffer[30000];
    int fd = open(filepath, O_RDONLY);
    int i = 0;

    if (fd == -1) {
        perror("Error opening file");
        return -1;
    }

    int bytesRead = read(fd, buffer, x);
    if (bytesRead == -1) {
        perror("Error reading file");
        close(fd);
        return -1;
    }

    for (; i < bytesRead; i++) {
        if (buffer[i] == '\n') {
            buffer[i] = '\0';
        }
    }

    printf("%i\n", i);
    printf("%s", buffer);
    close(fd);
    return 0;
}
