/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Main file for the rush2
*/

#include <stddef.h>
#include "my.h"
#include "rush2.h"

int main(int ac, char **av)
{
    if (check_error(ac, av))
        return (MY_EXIT_FAILURE);
    av[1] = str_to_lower(av[1]);
    my_print(ac, av);
    return (MY_EXIT_SUCCESS);
}

int check_error(int ac, char **av)
{
    int i = 2;

    if (ac < 3)
        return (1);
    if (check_str(av[1]))
        return (1);
    while (i < ac) {
        if (check_char(av[i]))
            return (1);
        i = i + 1;
    }
    return (0);
}

int check_str(char *av)
{
    if ((my_strcmp(av, "") == 0))
        return (1);
    if (av == NULL)
        return (1);
    return (0);
}

int check_char(char *av)
{
    if ((my_strcmp(av, "") == 0))
        return (1);
    if (my_strlen(av) != 1)
        return (1);
    if (!my_is_alpha(av[0]))
        return (1);
    return (0);
}
