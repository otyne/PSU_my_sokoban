/*
** EPITECH PROJECT, 2018
** my put nbr base
** File description:
** put an nbr in a given base
*/

#include "my.h"

static int displaynbr_base(int nbr, int base_len, char const *base)
{
    int i = 0;
    
    if (nbr < 0) {
        my_putchar('-');
        i = nbr % base_len * -1;
        displaynbr_base(nbr / base_len * -1, base_len, base);
        my_putchar(base[i]);
    }
    if (nbr > 0) {
        i = nbr % base_len;
        displaynbr_base(nbr / base_len, base_len, base);
        my_putchar(base[i]);
    }
    return (0);
}

int my_putnbr_base(int nbr, char const *base)
{
    int base_len = 0;

    while (base[base_len] != '\0')
        base_len += 1;
    if (nbr == 0) {
        my_putchar('0');
        return (0);
    }
    return (displaynbr_base(nbr, base_len, base));
}
