/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Unit tests for str_to_lower
*/

#include <criterion/criterion.h>
#include "rush2.h"

Test(str_to_lower, all_upper)
{
    char *str = "MY NAME IS MARVIN!!!";

    cr_assert_str_eq(str_to_lower(str), "my name is marvin!!!");
}

Test(str_to_lower, all_lower)
{
    char *str = "my name is marvin!!!";

    cr_assert_str_eq(str_to_lower(str), str);
}

Test(str_to_lower, lower_and_upper)
{
    char *str = "mY NaME IS mArvIN!!!";

    cr_assert_str_eq(str_to_lower(str), "my name is marvin!!!");
}

Test(str_to_lower, all_digits)
{
    char *str = "0123456789";

    cr_assert_str_eq(str_to_lower(str), str);
}
