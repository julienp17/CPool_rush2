/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Unit tests for print_occurence
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "rush2.h"

Test(print_occurence, one_occurence, .init = cr_redirect_stdout)
{
    char my_char = 'y';

    print_occurence(my_char, 1);
    fflush(stdout);
    cr_assert_stdout_eq_str("y:1\n");
}

Test(print_occurence, zero_occurence, .init = cr_redirect_stdout)
{
    char my_char = 'h';

    print_occurence(my_char, 0);
    fflush(stdout);
    cr_assert_stdout_eq_str("h:0\n");
}

Test(print_occurence, lots_occurence, .init = cr_redirect_stdout)
{
    char my_char = 'e';

    print_occurence(my_char, 26);
    fflush(stdout);
    cr_assert_stdout_eq_str("e:26\n");
}
