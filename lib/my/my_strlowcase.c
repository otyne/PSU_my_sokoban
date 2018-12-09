/*
** EPITECH PROJECT, 2018
** my str lowcase
** File description:
** low case all low cases
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int i = 0;
    int diff = 'a' - 'A';

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += diff;
        i += 1;
    }
    return (str);
}
