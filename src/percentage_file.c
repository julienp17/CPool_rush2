/*
** EPITECH PROJECT, 2019
** C Pool Day
** File description:
** Get percentages in files
*/

#include <string.h>
#include <stdio.h>
#include "rush2.h"

float get_percentage_in_file(char letter, int language)
{
    FILE *stream = fopen(LETTERS_FILE, "r");
    char line[50] = "";
    char *percentage_str = 0;
    float percentage = 0.0;
    int i = 0;

    while (i < letter - 97 + 1) {
        fgets(line, 50, stream);
        i = i + 1;
    }
    percentage_str = get_percentage_in_line(line, language);
    percentage = str_percentage_to_float(percentage_str);
    fclose(stream);
    return (percentage);
}

char *get_percentage_in_line(char *line, int language)
{
    int i = 0;
    char *token = 0;

    token = strtok(line, CSV_SEP);
    while (i < language) {
        token = strtok(NULL, CSV_SEP);
        i = i + 1;
    }
    return (token);
}

float str_percentage_to_float(char *str)
{
    int i = 0;
    float nb = 0.0;

    while (str[i] != '\0') {
        if (str[i] != '.')
            nb = nb * 10 + str[i] - '0';
        i = i + 1;
    }
    return (nb / 1000);
}
