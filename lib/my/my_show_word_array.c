/*
** EPITECH PROJECT, 2022
** MY_SHOW_WORD_ARRAY
** File description:
** do thing
*/
#include <stdio.h>
#include <unistd.h>

int my_show_word_array(char * const *tab)
{
    int size;
    for (size = 0; tab[size] != NULL; size++);
    for (int n = 0; n < size; n++) {
        for (int i = 0; tab[n][i]; i++)
            write(1, &tab[n][i], 1);
        write(1, "\n", 1);
    }
    return (0);
}
