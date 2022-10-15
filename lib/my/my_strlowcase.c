/*
** EPITECH PROJECT, 2022
** MY_STRLOWCASE
** File description:
** LOWER case !
*/

char *my_strlowcase(char *str)
{
    for (int n = 0; str[n]; n++) {
        if (str[n] >= 'A' && str[n] <= 'Z')
            str[n] += 32;
    }
    return (str);
}
