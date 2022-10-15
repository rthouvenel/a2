/*
** EPITECH PROJECT, 2022
** MY_STRCAPITALIZE
** File description:
** do capitalization
*/

char *my_strlowcase2(char *str)
{
    for (int n = 0; str[n]; n++) {
        if (str[n] >= 'A' && str[n] <= 'Z')
            str[n] += 32;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    str = my_strlowcase2(str);
    for (int n = 0; str[n]; n++) {
        if (str[n] >= 'a' && str[n] <= 'z' &&
            (( n > 0 && str[n - 1] == ' ') || n == 0))
            str[n] -= 32;
    }
    return (str);
}
