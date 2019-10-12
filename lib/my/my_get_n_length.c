/*
** EPITECH PROJECT, 2019
** my_get_n_length.c
** File description:
** Return the number of digits of a number
*/

int get_n_length(int n)
{
    int n_length = 0;

    if (n == 0)
        return (1);
    while (n != 0) {
        n_length = n_length + 1;
        n = n / 10;
    }
    return (n_length);
}
