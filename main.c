/*
** EPITECH PROJECT, 2022
** RUSH2
** File description:
** rush2
*/
#include "include/my.h"

int count_c(char *str, char c)
{
    int count = 0;
    for (int n = 0; str[n]; n++) {
        if (str[n] == c || str[n] == c + 32)
            count++;
    }
    return (count);
}

int main(int ac, char **av)
{
    int count = 0;
    if (ac < 3)
        return (0);
    for (int n = 2; av[n] != NULL; n++) {
        if (av[n][0] >= 'a' && av[n][0] <= 'z' ||
            av[n][0] >= 'A' && av[n][0] <= 'Z') {
            write(1, &av[n][0], 1);
            write(1, ":", 1);
            count = count_c(av[1], av[n][0]);
            my_put_nbr(count);
            write(1, "\n", 1);
        }
    }
    return (0);
}
