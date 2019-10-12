/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Print to screen
*/

#include "my.h"
#include "rush2.h"
#include <stdio.h>

void my_print(int ac, char **av, struct letter_t letters[NB_ALPHABET])
{
    int i = 2;
    int j = 0;
    char my_letter = ' ';

    while (i < ac) {
        my_letter = av[i][0];
        if (my_is_alpha_upper(my_letter))
            my_letter = my_letter + 32;
        j = 0;
        while (j < NB_ALPHABET) {
            if (my_letter == letters[j].letter)
                print_line(av[i][0], letters[j]);
            j = j + 1;
        }
        i = i + 1;
    }
    print_language(letters);
}

void print_line(char my_letter, struct letter_t letter)
{
    print_occurence(my_letter, letter.occurence);
    my_putchar(' ');
    my_putchar('(');
    print_percentage(letter.percentage, FLOAT_FIGURES);
    my_putchar(')');
    my_putchar('\n');
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

void print_language(struct letter_t letters[NB_ALPHABET])
{
    my_putchar('=');
    my_putchar('>');
    my_putchar(' ');
    my_putstr(get_language(letters));
    my_putchar('\n');
}
