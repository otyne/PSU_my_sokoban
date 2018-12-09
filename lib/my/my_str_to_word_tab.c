/*
** EPITECH PROJECT, 2018
** my str to word tab
** File description:
** lib
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int nb_cols(char *str, char sep)
{
    int nb = 0;

    while (*str != '\0' && *str != sep) {
        nb += 1;
        str += 1;
    }
    return (nb);
}

int nb_lines(char *str, char sep)
{
    int nb = 1;

    while (*str != '\0') {
        if (*str == sep)
            nb += 1;
        str += 1;
    }
    return (nb);
}

char **my_str_to_word_tab(char *str, char sep)
{
    int i = 0;
    int cols = 0;
    int lines = nb_lines(str, sep);
    char **tab = malloc(sizeof(char *) * (lines + 1));

    for (i = 0; i != lines; i++) {
        cols = nb_cols(str, sep);
        tab[i] = malloc(cols + 1);
        tab[i][cols] = '\0';
        tab[i] = my_strncpy(tab[i], str, cols);
        str += cols + 1;
    }
    tab[i] = NULL;
    return (tab);
}