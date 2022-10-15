/*
** EPITECH PROJECT, 2022
** RUSH2
** File description:
** rush2
*/
#include "include/my.h"

int main(int ac, char **av)
{
    int count = 0;
    if (ac < 3 || av[2][0] < 'a' && av[2][0] > 'z' &&
        av[2][0] < 'A' && av[2][0] > 'Z')
        return (0);
    for (int n = 0; av[1][n]; n++) {
        if (av[1][n] == av[2][0] || av[1][n] == av[2][0] + 32)
            count++;
    }
    write(1, &av[2][0], 1);
    write(1, ":", 1);
    my_put_nbr(count);
    write(1, "\n", 1);
    return (0);
}
