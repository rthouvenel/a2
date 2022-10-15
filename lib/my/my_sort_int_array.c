/*
** EPITECH PROJECT, 2022
** MY_SORT_INT_ARRAY
** File description:
** sort an integer array
*/

int check_in_order(int *array, int size)
{
    while (size >= 0) {
        if (array[size] < array[size - 1])
            return (1);
        size--;
    }
    return (0);
}

void my_sort_int_array(int *array, int size)
{
    int n = 0, stamp = 0;
    while (check_in_order(array, size) && n + 1 < size) {
        if ((array[n] >= array[n + 1])) {
            stamp = array[n];
            array[n] = array[n + 1];
            array[n + 1] = stamp;
            n = 0;
        } else
            n++;
    }
}
