/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Get percentages of letters occurence
*/

#include "rush2.h"

float get_percentage(char const *str, int occurence)
{
    float percentage = 0.0;

    percentage = (float)occurence * 100 / (float)get_total_letters(str);
    return (percentage);
}
