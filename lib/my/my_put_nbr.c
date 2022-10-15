/*
** EPITECH PROJECT, 2022
** MY_PUT_NBR
** File description:
** print number
*/

#include <unistd.h>

int my_put_nbr2(int stock, int stamp, int n, int iso)
{
    while (stock != 0 && stock != 1) {
        n *= 10;
        n += stock % 10;
        stock /= 10;
        stamp = n % 10 + '0';
        write(1, &stamp, 1);
    }
    if (iso == 1)
        write(1, "0", 1);
    else if (stock == 1)
        write(1, "1", 1);
    return (0);
}

int my_put_nbr(int nb)
{
    int stock = 0, n = 0, stamp = 0, iso = 0;
    if (nb < 0) {
        write(1, "-", 1);
        nb *= -1;
    } else if (nb == 0) {
        write(1, "0", 1);
        return (0);
    }
    if (nb % 10 == 0)
        iso++, nb++;
    while (nb != 0) {
        stock *= 10;
        stock += nb % 10;
        nb /= 10;
    }
    my_put_nbr2(stock, stamp, n, iso);
    return (0);
}
