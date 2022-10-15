/*
** EPITECH PROJECT, 2022
** MY_GETNBR
** File description:
** get the number
*/

int my_getnbr(char const *str)
{
    long int nbr = 0;
    int n = 0, isneg = 1;
    while ((str[n] > '9' || str[n] < '0') && str[n])
        n++;
    if (n > 0 && str[n - 1] == '-')
        isneg *= -1;
    while (str[n] <= '9' && str[n] >= '0') {
        nbr *= 10;
        nbr += str[n] - '0';
        n++;
    }
    nbr *= isneg;
    if (nbr < -2147483648 || nbr > 2147483647)
        return (0);
    return (nbr);
}
