/*
** EPITECH PROJECT, 2018
** my str upcase
** File description:
** up case all low cases
*/

#include "my.h"

char *my_strupcase(char *str)
{
    int i = 0;
    int diff = 'A' - 'a';

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] += diff;
        i += 1;
    }
    return (str);
}
