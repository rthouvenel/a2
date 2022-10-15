/*
** EPITECH PROJECT, 2022
** MY_STR_ISLOWER
** File description:
** returns 1 if the string passed as parameter only contains lowercase
** alphabetical characters and 0 otherwise.
*/

int my_str_islower(char const *str)
{
    for (int n = 0; str[n]; n++) {
        if (str[n] < 'a' || str[n] > 'z')
            return (0);
    }
    return (1);
}
