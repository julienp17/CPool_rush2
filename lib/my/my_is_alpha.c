/*
** EPITECH PROJECT, 2019
** my_is_alpha.c
** File description:
** Returns 1 if char is alphabetical, 0 otherwise
*/

int my_is_alpha_lower(char my_char);
int my_is_alpha_upper(char my_char);

int my_is_alpha(char my_char)
{
    if (my_is_alpha_lower(my_char) || my_is_alpha_upper(my_char))
        return (1);
    else
        return (0);
}
