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

int count_alpha(char *str)
{
    int count = 0;
    for (int n = 0; str[n]; n++) {
        if (str[n] >= 'a' && str[n] <= 'z' ||
            str[n] >= 'A' && str[n] <= 'Z')
            count++;
    }
    return (count);
}

int process(char **av, int n, double total)
{
    double res = 0;
    int count = 0, cp = 0;
    write(1, &av[n][0], 1);
    write(1, ":", 1);
    count = count_c(av[1], av[n][0]);
    my_put_nbr(count);
    write(1, " ", 1);
    res = 100 / total * count;
    cp = res;
    write(1, "(", 1);
    if (res != 0) {
        my_put_nbr(res);
        res -= cp;
        res *= 100;
        write(1, ".", 1);
        my_put_nbr(res);
    } else
        write(1, "0.00", 4);
}

int main(int ac, char **av)
{
    int count = 0, cp = 0;
    double res = 0, total = 0;
    if (ac < 3)
        return (0);
    total = count_alpha(av[1]);
    for (int n = 2; av[n] != NULL; n++) {
        if (av[n][0] >= 'a' && av[n][0] <= 'z' ||
            av[n][0] >= 'A' && av[n][0] <= 'Z') {
            process(av, n, total);
            write(1, "%)\n", 3);
        }
    }
    return (0);
}
