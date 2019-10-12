/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** Displays the number given as parameter.
*/

#include <limits.h>
#include <stdio.h>

void my_putchar(char c);

int get_n_length(int n);
int get_denominateur(int n);
void print_number(int n);
void handle_int_min(void);

int my_put_nbr(int nb)
{
    if (nb > 0) {
        print_number(nb);
    } else if (nb == 0) {
        my_putchar('0');
    } else {
        my_putchar('-');
        if (nb == INT_MIN)
            handle_int_min();
        else
            print_number(nb * -1);
    }
    return (0);
}

void print_number(int n)
{
    int denominateur = 0;

    denominateur = get_denominateur(n);
    while (denominateur > 0) {
        int digit = n / denominateur;
        char my_char = '0' + digit;
        my_putchar(my_char);
        n %= denominateur;
        denominateur /= 10;
    }
}

int get_denominateur(int n)
{
    int i = 0;
    int n_length = 0;
    int denominateur = 1;

    n_length = get_n_length(n);
    while (i < n_length - 1) {
        denominateur *= 10;
        i++;
    }
    return (denominateur);
}

void handle_int_min(void)
{
    int denominateur = 0;
    int n = INT_MAX;

    denominateur = get_denominateur(INT_MAX);
    while (denominateur > 0) {
        int digit = n / denominateur;
        char my_char = '0' + digit;
        my_putchar(my_char);
        n %= denominateur;
        denominateur /= 10;
        if (denominateur == 1) {
            my_putchar('8');
            break;
        }
    }
}
