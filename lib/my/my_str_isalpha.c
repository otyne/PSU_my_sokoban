/*
** EPITECH PROJECT, 2018
** my str is alpha
** File description:
** 1 if alpha 0 if not
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            i += 1;
        else
            return (0);            
    }
    return (1);
}
