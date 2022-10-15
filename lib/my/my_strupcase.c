/*
** EPITECH PROJECT, 2022
** MY_STRUPCASE
** File description:
** upper case !
*/

char *my_strupcase(char *str)
{
    for (int n = 0; str[n]; n++) {
        if (str[n] >= 'a' && str[n] <= 'z')
            str[n] -= 32;
    }
    return (str);
}
