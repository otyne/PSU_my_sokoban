/*
** EPITECH PROJECT, 2018
** my str is lower 
** File description:
** 1 if up case 0 if not
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i += 1;
        else
            return (0);
    }
    return (1);
}
