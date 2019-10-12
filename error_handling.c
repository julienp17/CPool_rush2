/*
** EPITECH PROJECT, 2019
** C Pool Day
** File description:
** Error handling functions
*/

#include <stddef.h>
#include "my.h"
#include "rush2.h"

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
