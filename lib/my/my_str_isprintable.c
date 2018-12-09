/*
** EPITECH PROJECT, 2018
** my str is printable
** File description:
** 1 if printable 0 if not
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 31 && str[i] < 127)
            i += 1;
        else
            return (0);
    }
    return (1);
}
