/*
** EPITECH PROJECT, 2019
** C Pool Rush 2
** File description:
** Headers for rush2
*/

#ifndef DEF_RUSH2_
    #define DEF_RUSH2_

    #define MY_EXIT_SUCCESS         0
    #define MY_EXIT_FAILURE         84
    #define OCCURENCE_SEP           ':'
    #define FIGURES_SEP             '.'
    #define FLOAT_FIGURES           2

    int main(int ac, char **av);
    int check_error(int ac, char **av);
    int check_str(char *av);
    int check_char(char *av);

    char *str_to_lower(char *str);
    int get_occurence(char const *str, char my_char);
    int get_total_letters(char const *str);

    float get_percentage(char const *str, int occurence);

    void my_print(int ac, char **av);
    void print_occurence(char my_char, int occurence);
    void print_percentage(float percentage, int figures);
#endif
