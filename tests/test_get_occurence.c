/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Unit tests for get_occurence
*/

#include <criterion/criterion.h>
#include "rush2.h"

Test(get_occurence, zero_occurence)
{
    char *str = "hello, my name is marvin!";
    char my_char = 'w';

    cr_assert_eq(get_occurence(str, my_char), 0);
}

Test(get_occurence, one_occurence)
{
    char *str = "hello, my name is marvin";
    char my_char = 'y';

    cr_assert_eq(get_occurence(str, my_char), 1);
}

Test(get_occurence, lots_of_occurence)
{
    char *str = "hele meve ukulele pele gete the mone";
    char my_char = 'e';

    cr_assert_eq(get_occurence(str, my_char), 12);
}
