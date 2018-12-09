/*
** EPITECH PROJECT, 2018
** my strncpy
** File description:
** copy n char
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n && src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    if (src[i] == '\0' && i > n)
        dest[i] = '\0';
    return (dest);
}
