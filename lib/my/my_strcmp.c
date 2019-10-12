/*
** EPITECH PROJECT, 2019
** C Pool Day 06
** File description:
** Checks if two strings are identical
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (my_strlen(s1) != my_strlen(s2))
        return (s1[0] - s2[0]);
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[0] - s2[0]);
        i = i + 1;
    }
    return (0);

}
