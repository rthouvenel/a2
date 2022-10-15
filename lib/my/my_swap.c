/*
** EPITECH PROJECT, 2022
** MY_SWAP
** File description:
** swap the content of two varables
*/

void my_swap(int *a, int *b)
{
    int c = *b;
    *b = *a;
    *a = c;
}
