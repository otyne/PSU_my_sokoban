/*
** EPITECH PROJECT, 2018
** my str cmp
** File description:
** compare 2 strings
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    while (i != n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i += 1;
    return (s1[i] - s2[i]);
}
