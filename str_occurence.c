/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Manage string manipulation
*/

#include "my.h"
#include "rush2.h"

char *str_to_lower(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (my_is_alpha_upper(str[i]))
            str[i] = str[i] + 32;
        i = i + 1;
    }
    return (str);
}

int get_occurence(char const *str, char my_char)
{
    int i = 0;
    int occurence = 0;

    if (my_is_alpha_upper(my_char))
        my_char = my_char + 32;
    while (str[i] != '\0') {
        if (str[i] == my_char)
            occurence = occurence + 1;
        i = i + 1;
    }
    return (occurence);
}

int get_total_letters(char const *str)
{
    int i = 0;
    int total_letters = 0;

    while (str[i] != '\0') {
        if (my_is_alpha(str[i]))
            total_letters = total_letters + 1;
        i = i + 1;
    }
    return (total_letters);
}
