/*
** EPITECH PROJECT, 2019
** my_is_alpha_upper.c
** File description:
** Returns 1 if char is alpha and upper, 0 otherwise
*/

int my_is_alpha_upper(char my_char)
{
    if (my_char >= 'A' && my_char <= 'Z')
        return (1);
    else
        return (0);
}
