/*
** EPITECH PROJECT, 2018
** my str is alpha
** File description:
** 1 if num 0 if not
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i += 1;
        else
            return (0);
    }
    return (1);
}
