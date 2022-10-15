/*
** EPITECH PROJECT, 2022
** MY_IS_PRIME
** File description:
** return 1 if the number is prime or 0 if not
*/

int my_is_prime(int nb)
{
    int md = 1;
    if (nb <= 1)
        return (0);
    while (md < nb) {
        if (nb % md == 0 && md != 1 && md != nb) {
            return (0);
        }
        md++;
    }
    return (1);
}
