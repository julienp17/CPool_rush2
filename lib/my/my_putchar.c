/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** Print a char to standard output
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
