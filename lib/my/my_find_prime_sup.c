/*
** EPITECH PROJECT, 2022
** MY_FIND_PRIME_SUP
** File description:
** return the smallest prime number that is greater than, or equal
** to, the number given as a parameter
*/

int my_is_prime2(int nb)
{
    int md = 1;
    while (md < nb) {
        if (nb % md == 0 && md != 1 && md != nb) {
            return (0);
        }
        md++;
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    while (my_is_prime2(nb) == 0)
        nb++;
    return (nb);
}
