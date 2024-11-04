/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** compte le nombre de lettre
*/

int my_strlen(char const *str)
{
    int test = 0;

    while (str[test] != '\0') {
    test++;
    }
    return (test);
}
