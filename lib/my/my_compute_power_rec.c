/*
** EPITECH PROJECT, 2018
** my compute power rec
** File description:
** power in recursivity mod
*/

#include "my.h"

static int power_rec(int pow, int nb, int p)
{
    if (p > 1)
        power_rec(pow * nb, nb, p - 1);
    else
        return (pow);
}

int my_compute_power_rec(int nb, int p)
{
    int pow = nb;
    
    if (p < 0)
        return (0);
    else if (p == 0)
        return (1);
    else
        return (power_rec(pow, nb, p));
}
