/*
** EPITECH PROJECT, 2022
** MY_STRLEN
** File description:
** count and return the number of characters in a string
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int n = 0;
    while (str[n])
        n++;
    return (n);
}
