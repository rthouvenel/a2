/*
** EPITECH PROJECT, 2022
** MY_STRSTR
** File description:
** do the strstr behavior
*/
#include <stdio.h>

int verif(char *str, char const *to_find)
{
    for (int n = 0; to_find[n]; n++) {
        if (to_find[n] != str[n])
            return (0);
    }
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    for (int n = 0; str[n]; n++) {
        if (verif(&str[n], to_find))
            return (&str[n]);
    }
    return (NULL);
}
