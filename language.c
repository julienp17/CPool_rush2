/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Determines which language is the string
*/

#include "rush2.h"
#include <stdio.h>

char *get_language(struct letter_t letters[NB_ALPHABET])
{
    int i = 0;
    float languages[4] = {0, 0, 0, 0};

    sort_letters_by_percentage(letters);
    while (i < NB_ALPHABET) {
        if (letters[i].percentage == 0.0)
            return (decide_language(languages));
        award_points(letters[i], languages);
        i = i + 1;
    }
    return (decide_language(languages));
}

void award_points(struct letter_t letter, float lang[NB_LANGUAGES])
{
    int i = 0;
    float lang_perc = 0.0;

    if (letter.letter == 'e')
        return;
    while (i < NB_LANGUAGES) {
        lang_perc = get_percentage_in_file(letter.letter, i + 1);
        lang[i] = lang[i] + get_abs_val(letter.percentage, lang_perc);
        i = i + 1;
    }
}

float get_abs_val(float nb1, float nb2)
{
    float res = nb1 - nb2;

    if (res > 0.0)
        return (res);
    else
        return (res * -1.0);
}

char *decide_language(float languages[NB_LANGUAGES])
{
    int index = 0;

    index = get_min_points_index(languages);
    switch(index) {
        case 1:
            return "English";
        case 2:
            return "French";
        case 3:
            return "German";
        case 4:
            return "Spanish";
        default:
            return "Unknown language";
    }
}

int get_min_points_index(float languages[NB_LANGUAGES])
{
    int i = 0;
    float min_points = 0.0;

    min_points = languages[i];
    while (i < NB_LANGUAGES) {
        if (min_points > languages[i])
            min_points = languages[i];
        i = i + 1;
    }
    i = 0;
    while (i < NB_LANGUAGES) {
        if (min_points == languages[i])
            return (i + 1);
        i = i + 1;
    }
    return (0);
}
