/*
** EPITECH PROJECT, 2024
** Main settingup
** File description:
** Main of settingup
*/
#include "my.h"
#include "lib.h"
#include <sys/stat.h>

int printing_tab(char **tab, int i)
{
    for (int n = 0; tab[i][n] != '\0'; n++){
        if ((tab[i][n]) == '.')
            (tab[i][n]) = 'x';
    }
    return 0;
}

long get_file_size(const char *filename)
{
    struct stat file_status;

    if (stat(filename, &file_status) < 0)
        return 84;
    return file_status.st_size;
}

void fs_cat_500_bytes(char const *filepath, int x)
{
    long file_size = get_file_size(filepath);
    char buffer[file_size];
    int fd;
    char **tab;

    fd = open(filepath, O_RDONLY);
    read(fd, buffer, x);
    tab = my_str_to_point_array(buffer);
    if (file_size < 0)
        return;
    for (int i = 0; tab[i] != NULL; i++)
        printing_tab(tab, i);
    for (int k = 0; tab[k] != NULL; k++) {
        my_putstr(tab[k]);
        my_putchar('\n');
    }
    close(fd);
    return;
}

int main(int argc, char *argv[])
{
    if (argc <= 1 || argv[2] == NULL || my_getnbr(argv[2]) <= 0)
        return 84;
    fs_cat_500_bytes(argv[1], my_getnbr(argv[2]));
    return 0;
}
