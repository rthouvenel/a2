/*
** EPITECH PROJECT, 2022
** MY_STRCPY
** File description:
** copy a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int a = 0;
    for (; src[a]; a++)
        dest[a] = src[a];
    dest[a] = 0;
    return (dest);
}
