/*
** EPITECH PROJECT, 2022
** MY_STRCMP
** File description:
** do the strcpy behavior
*/

int my_strcmp(char const *s1, char const *s2)
{
    int is = 0;
    for (int n = 0; s1[n] && s2[n]; n++) {
        if (s1[n] != s2[n] && s1[n] > s2[n])
            return (1);
        if (s1[n] != s2[n] && s1[n] < s2[n])
            return (-1);
    }
    return (0);
}
