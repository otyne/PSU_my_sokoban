/*
** EPITECH PROJECT, 2018
** lib.h
** File description:
** lib.h
*/

#ifndef MY_H_
#define MY_H_

/* STRUCTS */


/* PROG FUNCS */

void my_map_element(char);
void sokolors(void);
int is_good(char **, int **);
void free_all(char **, char **, int *, int *);
char **print_tab(char **, int **);
int move_up(char ***, int *);
int move_down(char ***, int *);
int move_left(char ***, int *);
int move_right(char ***, int *);
int *move_cursor(char ***, int *, int);
int my_sokoban(char **, char **, int *, int *);
int *find_position(char **, int *);
char **tabcpy(char **, char **);
int *intcpy(int *, int *);
int nb_ixes(char **);

/* LIB FUNCS */

char *my_strdup(char *);
char *read_file(char *);
char **my_str_to_word_tab(char *, char);
void my_putchar(char);
int my_putstr(char *);
int my_put_nbr(int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char *);
int my_str_isnum(char *);
int my_str_islower(char *);
int my_str_isupper(char *);
int my_str_isprintable(char *);
int my_putnbr_base(int, char const *);
int my_getnbr_base(char const *, char const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
void my_print_params(int, char **);
void my_rev_params(int, char **);
void my_sort_params(int, char **);
int my_strlen(char *);

#endif
