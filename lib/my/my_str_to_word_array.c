/*
** EPITECH PROJECT, 2022
** MY_STR_TO_WORD_ARRAY
** File description:
** do thing
*/
#include <stdlib.h>
int my_strlen(char const *str);

int is_alpanum(char c)
{
    if (c <= '9' && c >= '0' ||
        c <= 'z' && c >= 'a' ||
        c <= 'Z' && c >= 'A')
        return (1);
    else
        return (0);
}

int count_word(char const *str)
{
    int count = 0;
    for (int n = 0; str[n]; n++) {
        if (is_alpanum(str[n]) && is_alpanum(str[n + 1]) == 0)
            count++;
    }
    return (count);
}

int size_word(char const *str)
{
    int count = 0, n = 0;
    for (; is_alpanum(str[n]) == 0; n++, count++);
    for (; str[n] && is_alpanum(str[n]); n++) {
        count++;
    }
    return (count);
}

char *zero_nono(char *str)
{
    for (; is_alpanum(str[0]) == 0;) {
        for (int n = 0; str[n]; n++)
            str[n] = str[n + 1];
    }
    return (str);
}

char **my_str_to_word_array(char const *str)
{
    int tab_sz = count_word(str) + 1, count = 0, y = 0;
    char **tab = malloc(sizeof(char *) * tab_sz);
    for (int n = 0; n < my_strlen(str); n++) {
        count = size_word(&str[n]);
        tab[y] = malloc(sizeof(char) * count + 1);
        n += count, y++;
    }
    tab[y] = NULL;
    for (int i = 0, a = 0; i < my_strlen(str); i++, a++) {
        count = size_word(&str[i]);
        for (int n = 0, o = i; n < count; n++, o++) {
            tab[a][n] = str[o];
        }
        tab[a] = zero_nono(tab[a]);
        i += count;
    }
    return (tab);
}
