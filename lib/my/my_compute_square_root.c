/*
** EPITECH PROJECT, 2018
** square root
** File description:
** square root in recursivity imo
*/

#include "my.h"

static int square_root(int quo, int sr, int nb)
{
    if (sr == nb)
        return (quo);
    else if (sr > nb)
        return (0);
    else
        square_root(quo + 1, my_compute_power_rec(quo + 1, 2), nb);
}

int my_compute_square_root(int nb)
{
    int quo = 0;
    int sr = 0;

    if (nb < 0)
        return (0);
    else
        return (square_root(quo, sr, nb));
}
