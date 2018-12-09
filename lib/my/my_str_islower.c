/*
** EPITECH PROJECT, 2018
** my str is lower 
** File description:
** 1 if low case 0 if not
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            i += 1;
        else
            return (0);
    }
    return (1);
}
