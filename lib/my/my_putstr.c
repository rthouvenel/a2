/*
** EPITECH PROJECT, 2022
** MY_PUTSTR
** File description:
** display the content of a string
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int n = 0;
    while (str[n]) {
        write(1, &str[n], 1);
        n++;
    }
    return (n);
}
