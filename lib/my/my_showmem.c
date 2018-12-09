/*
** EPITECH PROJECT, 2018
** my show mem 
** File description:
** show memory stack
*/

#include "my.h"

static int is_printable(char c)
{
    if (c < 32 || c > 126)
        return (0);
    else
        return (1);
}

static void put_print(char const *str, int size)
{
    int i = 0;

    while (i < size) {
        if (is_printable(str[i]) == 1)
            my_putchar(str[i]);
        else
            my_putchar('.');
        i += 1;
    }
}

static void put_hexa(char const *str, int size)
{
    int i = 0;

    while (i < size) {
        if (str[i] < 16)
            my_putchar('0');
        my_putnbr_base(str[i], "0123456789abcdef");
        if (i % 2 == 1)
            my_putchar(' ');
        i += 1;
    }
}

static void showmem_line(char const *str, int size)
{
    my_putnbr_base((int)&str[0], "0123456789abcdef");
    my_putchar(':');
    my_putchar('\t');
    put_hexa(str, size);
    put_print(str, size);
    my_putchar('\n');
}

int my_showmem(char const *str, int size)
{
    int i = 0;

    while (i < size && str[i] != '\0') {
        showmem_line(str, 16);
        str += 16;
        i += 1;
    }
}
