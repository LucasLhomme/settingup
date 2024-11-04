/*
** EPITECH PROJECT, 2024
** My_swap
** File description:
** Premier pointer
*/

void my_swap(int *a, int *b)
{
    int valeur_a = *a;

    *a = *b;
    *b = valeur_a;
}
