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
    #define NB_ALPHABET             26
    #define NB_LANGUAGES            4
    #define OCCURENCE_SEP           ':'
    #define FIGURES_SEP             '.'
    #define FLOAT_FIGURES           2
    #define LETTERS_FILE            "letters.csv"
    #define CSV_SEP                 ";"

    typedef struct letter_t{
        char letter;
        int occurence;
        float percentage;
    } letter_t;

    int main(int ac, char **av);

    int check_error(int ac, char **av);
    int check_str(char *av);
    int check_char(char *av);

    char *str_to_lower(char *str);
    int get_occurence(char const *str, char my_char);
    int get_total_letters(char const *str);
    float get_percentage(char const *str, int occurence);

    void my_print(int ac, char **av, struct letter_t[NB_ALPHABET]);
    void print_line(char my_letter, struct letter_t letter);
    void print_occurence(char my_char, int occurence);
    void print_percentage(float percentage, int figures);
    void print_language(struct letter_t[NB_ALPHABET]);

    void init_letters(char *str, struct letter_t letters[NB_ALPHABET]);
    void sort_letters_by_percentage(struct letter_t letters[NB_ALPHABET]);
    void my_swap_struct(struct letter_t letters[NB_ALPHABET], int i, int j);

    float get_percentage_in_file(char letter, int language);
    char *get_percentage_in_line(char *line, int language);
    float str_percentage_to_float(char *str);

    char *get_language(struct letter_t letters[NB_ALPHABET]);
    void award_points(struct letter_t letter, float lang[NB_LANGUAGES]);
    float get_abs_val(float nb1, float nb2);
    char *decide_language(float languages[NB_LANGUAGES]);
    int get_min_points_index(float languages[NB_LANGUAGES]);
#endif
