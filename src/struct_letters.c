/*
** EPITECH PROJECT, 2019
** C Pool Day
** File description:
** Functions for manipulating the struct letter_t
*/

#include "rush2.h"

void init_letters(char *str, struct letter_t letters[NB_ALPHABET])
{
    int i = 0;
    char letter = 'a';

    while (i < NB_ALPHABET) {
        letters[i].letter = letter;
        letters[i].occurence = get_occurence(str, letter);
        letters[i].percentage = get_percentage(str, letters[i].occurence);
        i = i + 1;
        letter = letter + 1;
    }
}

void sort_letters_by_percentage(struct letter_t letters[NB_ALPHABET])
{
    int i = 0;
    int j = 0;

    while (i < NB_ALPHABET) {
        j = 0;
        while (j < NB_ALPHABET) {
            if (letters[i].percentage > letters[j].percentage)
                my_swap_struct(letters, i, j);
            j = j + 1;
        }
        i = i + 1;
    }
}

void my_swap_struct(struct letter_t letters[NB_ALPHABET], int i, int j)
{
    struct letter_t tmp = letters[i];

    letters[i] = letters[j];
    letters[j] = tmp;
}
