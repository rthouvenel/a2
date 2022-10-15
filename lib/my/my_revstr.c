/*
** EPITECH PROJECT, 2022
** MY_REVSTR
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int n = 0;
    char pass;
    for (; str[n] != '\0'; n++);
    n -= 1;
    for (int a = 0; n > a; n--, a++) {
        pass = str[n];
        str[n] = str[a];
        str[a] = pass;
    }
    return (str);
}
