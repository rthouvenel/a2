/*
** EPITECH PROJECT, 2022
** MY_PUTNBR_BASE
** File description:
** do things
*/
#include <unistd.h>

int sizeit(char const *base)
{
    int mod = 0;
    for (; base[mod]; mod++);
    return (mod);
}

int my_getnbr_base(int nbr, char const *base)
{
    int temp = 0, n = 0,  mod = sizeit(base), res = 0;
    char str[mod];
    for (; base[mod]; mod++);
    for (; nbr != 0; n++) {
        temp = nbr % mod;
        nbr /= mod;
        str[n] = base[temp];
    }
    n--;
    for (; n >= 0; n--) {
        res += str[n] - '0';
        if (n > 0)
            res *= 10;
    }
    return (res);
}
