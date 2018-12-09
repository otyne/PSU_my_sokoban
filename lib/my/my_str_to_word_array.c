/*
** EPITECH PROJECT, 2018
** my str to word array
** File description:
** str to word ta
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

static int is_alphanum(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

static int nb_words(char const *str)
{
    int i = 0;
    int words = 0;

    while (str[i] != '\0') {
        if (is_alphanum(str[i]) == 1)
            words += 1;
        while (is_alphanum(str[i]) == 1 && str[i] != '\0')
            i += 1;
        if (str[i] != '\0')
            i += 1;
    }
    return (words);
}

static int word_len(char const *str, int k)
{
    int len = 0;

    while (is_alphanum(str[k]) == 1) {
        k += 1;
        len += 1;
    }
    return (len);
}

char **my_str_to_word_array(char const *str)
{
    char **array = malloc(sizeof(char *) * (nb_words(str) + 1));
    int i = 0;
    int k = 0;
    int a = 0;

    while (i != nb_words(str)) {
        a = 0;
        while (is_alphanum(str[k]) == 0)
            k += 1;
        array[i] = malloc(sizeof(char) * (word_len(str, k) + 1));
        while (is_alphanum(str[k]) == 1) {
            array[i][a] = str[k];
            a += 1;
            k += 1;
        }
        array[i][a] = '\0';
        i += 1;
    }
    array[i] = NULL;
    return (array);
}
