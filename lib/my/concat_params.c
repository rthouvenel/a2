/*
** EPITECH PROJECT, 2022
** CONCAT_PARAMS
** File description:
** do thing
*/
#include <stdlib.h>
int my_strlen(char const *str);

int my_getsize(int ac, char **av)
{
    int size = 0;
    for (int n = 0; n < ac; n++)
        for (int i = 0; av[n][i]; i++, size++);
    return (size);
}

char *concat_params(int argc, char **argv)
{
    char *str = malloc(sizeof(char) * my_getsize(argc, argv));
    int n = 0;
    for (int i = 0; i < argc; i++) {
        for (int a = 0; argv[i][a]; a++, n++)
            str[n] = argv[i][a];
        if (i < argc - 1)
            str[n] = '\n';
        n++;
    }
    return (str);
}
