/*
** EPITECH PROJECT, 2022
** MY_STR_ISUPPER
** File description:
** returns 1 if the string passed as parameter only contains uppercase
** alphabetical characters and 0 otherwise.
*/

int my_str_isupper(char const *str)
{
    for (int n = 0; str[n]; n++) {
        if (str[n] < 'A' || str[n] > 'Z')
            return (0);
    }
    return (1);
}
