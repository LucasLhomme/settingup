/*
** EPITECH PROJECT, 2024
** Main settingup
** File description:
** Main of settingup
*/


#include "my.h"
#include "lib.h"

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int countbyte = read(fd, buffer, size);

    if (countbyte == 0) {
        my_printf("read has nothing more to read\n”");
    }
    if (countbyte < size) {
        my_printf("read didn’t complete the entire buffer\n");
    }
    if (countbyte == size) {
        my_printf("read completed the entire buffer\n");
    }
    return;
}

void fs_cat_500_bytes(char const *filepath, int x)
{
    char buffer[10000];
    int fd = open(filepath, O_RDONLY);
    int countbyte = read(fd, buffer, x);
    int i = 0;

    for (; i < countbyte; i++);
    printf("%i\n", i);
    printf("%s\n", buffer);
    close(fd);
    return;
}

int main(int argc, char *argv[])
{
    if (argc <= 1 || my_getnbr(argv[2]) <= 0)
        return 84;
    fs_cat_500_bytes(argv[1], my_getnbr(argv[2]));
    return 0;
}
