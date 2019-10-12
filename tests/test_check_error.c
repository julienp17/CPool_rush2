/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Unit tests for check_error
*/

#include <criterion/criterion.h>
#include "rush2.h"

Test(check_error, too_much_argc)
{
    int argc = 8;
    char **argv = 0;

    cr_assert_eq(check_error(argc, argv), 1);
}

Test(check_error, not_enough_argc)
{
    int argc = 2;
    char **argv = 0;

    cr_assert_eq(check_error(argc, argv), 1);
}

Test(check_error, str_empty)
{
    int argc = 3;
    char **argv = {"./rush2", "", "c", 0};

    cr_assert_eq(check_error(argc, argv), 1);
}
/*
Test(check_error, char_empty)
{
    int argc = 3;
    char argv[4][15] = {"./rush2", "this is a test", "", 0};

    cr_assert_eq(check_error(argc, argv), 1);
}

Test(check_error, bad_char)
{
    int argc = 3;
    char argv[4][15] = {"./rush2", "this is a test", "ac", 0};
    cr_assert_eq(check_error(argc, argv), 1);
}

Test(check_error, no_error)
{
    int argc = 3;
    char argv[4][15] = {"./rush2", "this is a test", "e", 0};

    cr_assert_eq(check_error(argc, argv), 0);
}*/
