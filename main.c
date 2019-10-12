/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Main file for the rush2
*/

#include "my.h"
#include "rush2.h"
#include <stdio.h>

int main(int ac, char **av)
{
    letter_t letters[26];

    if (check_error(ac, av))
        return (MY_EXIT_FAILURE);
    av[1] = str_to_lower(av[1]);
    init_letters(av[1], letters);
    my_print(ac, av, letters);
    return (MY_EXIT_SUCCESS);
}
