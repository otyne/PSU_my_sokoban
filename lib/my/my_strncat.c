/*
** EPITECH PROJECT, 2018
** my str n cat
** File description:
** concate n char
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = my_strlen(dest);
    int k = 0;

    while (k != nb && src[k] != '\0') {
        dest[i] = src[k];
        i += 1;
        k += 1;
    }
    dest[i] = '\0';
    return (dest);
}
