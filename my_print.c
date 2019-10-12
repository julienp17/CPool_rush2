/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Print to screen
*/

#include "my.h"
#include "rush2.h"

void my_print(int ac, char **av)
{
    int i = 2;
    int occurence = 0;
    float percentage = 0;

    while (i < ac) {
        occurence = get_occurence(av[1], av[i][0]);
        percentage = get_percentage(av[1], occurence);
        print_occurence(av[i][0], occurence);
        my_putchar(' ');
        my_putchar('(');
        print_percentage(percentage, FLOAT_FIGURES);
        my_putchar(')');
        my_putchar('\n');
        i = i + 1;
    }
}

void print_occurence(char my_char, int occurence)
{
    my_putchar(my_char);
    my_putchar(OCCURENCE_SEP);
    my_put_nbr(occurence);
}

void print_percentage(float percentage, int figures)
{
    int i = 0;
    int digit = (int)percentage;

    if (figures < 0)
        return;
    my_put_nbr(digit);
    my_putchar(FIGURES_SEP);
    while (i < figures) {
        percentage = percentage * 10;
        digit = (int)percentage % 10;
        my_put_nbr(digit);
        i = i + 1;
    }
    my_putchar('%');
}
