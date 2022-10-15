/*
** EPITECH PROJECT, 2022
** MY_STRNCPY
** File description:
** copy a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;
    for (; src[a] != '\0' && a < n; a++)
        dest[a] = src[a];
    dest[n] = 0;
    return (dest);
}
