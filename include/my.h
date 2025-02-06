/*
** EPITECH PROJECT, 2024
** Mon H
** File description:
** Header avec les fonctions
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <dirent.h>
#include <fcntl.h>

#ifndef MY_H
    #define MY_H
int fs_open_file(char const *filepath);
int fs_cat_500_bytes(char const *filepath);
#endif /*my.h*/
