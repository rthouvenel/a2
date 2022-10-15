/*
** EPITECH PROJECT, 2022
** MY_STR_ISALPHA
** File description:
** eturns 1 if the string passed as parameter only contains alphabetical
** characters and 0 if the string contains another type of character.
*/

int my_str_isalpha(char const *str)
{
    for (int n = 0; str[n]; n++) {
        if (str[n] < 'A' || str[n] > 'Z' && str[n] < 'a' ||
            str[n] > 'z')
            return (0);
    }
    return (1);
}
