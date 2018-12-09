/*
** EPITECH PROJECT, 2018
** my show word array
** File description:
** show word array
*/

#include "my.h"
#include <unistd.h>

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i += 1;
    }
    return (0);
}
