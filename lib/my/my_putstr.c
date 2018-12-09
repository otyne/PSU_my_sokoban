/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** put a string in the standard output
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return (0);
}
