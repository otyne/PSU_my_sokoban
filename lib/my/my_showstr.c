/*
** EPITECH PROJECT, 2018
** my show str
** File description:
** show str
*/

#include "my.h"

int my_showstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 31 && str[i] < 127)
            my_putchar(str[i]);
        else {
            my_putchar('\\');
            (str[i] < 11) ? my_putchar('0') : 0;
            my_putnbr_base(str[i], "0123456789abcdef");
        }
        i += 1;
    }
    return (0);
}
