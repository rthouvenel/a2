/*
** EPITECH PROJECT, 2022
** MY_ISNEG
** File description:
** print 'N' if negative or 'P' if null or positive.
*/

#include <unistd.h>

int my_isneg(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
    return (0);
}
