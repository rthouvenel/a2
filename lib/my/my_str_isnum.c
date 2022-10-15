/*
** EPITECH PROJECT, 2022
** MY_STR_ISNUM
** File description:
** returns 1 if the string passed as parameter only contains digits
** and 0 otherwise.
*/

int my_str_isnum(char const *str)
{
    for (int n = 0; str[n]; n++) {
        if (str[n] < '0' || str[n] > '9')
            return (0);
    }
    return (1);
}
