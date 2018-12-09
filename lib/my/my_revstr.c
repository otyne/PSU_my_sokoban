/*
** EPITECH PROJECT, 2018
** my revstr
** File description:
** reverse string
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int end = 0;
    char tmp;

    while (str[end] != '\0')
        end += 1;
    end -= 1;
    while (i < end) {
        tmp = str[end];
        str[end] = str[i];
        str[i] = tmp;
        i += 1;
        end -= 1;
    }
    return (str);
}
