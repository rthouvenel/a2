/*
** EPITECH PROJECT, 2022
** MY_COMPUTE_POWER_REC
** File description:
** return the the first argument raised to the power of the second argument
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (p > 1) {
        nb *= my_compute_power_rec(nb, p - 1);
        p--;
        return (nb);
    }
}
