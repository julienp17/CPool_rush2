/*
** EPITECH PROJECT, 2019
** my_is_alpha_lower.c
** File description:
** Returns 1 if char is alpha and lower, 0 otherwise
*/

int my_is_alpha_lower(char my_char)
{
    if (my_char >= 'a' && my_char <= 'z')
        return (1);
    else
        return (0);
}
