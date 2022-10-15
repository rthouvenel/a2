/*
** EPITECH PROJECT, 2022
** MY_STRNCMP
** File description:
** do the strncpy behavior
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int is = 0;
    for (int a = 0; s1[a] && s2[a] && a < n; a++) {
        if (s1[a] != s2[a])
            return (s1[a] - s2[a]);
    }
    return (0);
}
