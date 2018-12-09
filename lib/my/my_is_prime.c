/*
** EPITECH PROJECT, 2018
** my is prime
** File description:
** check if number is prime
*/

#include "my.h"

static int is_prime(int mod, int nb)
{
    if (mod != nb) {
        if (nb % mod != 0)
            is_prime(mod + 1, nb);
        else
            return (0);
    } else {
        return (1);
    }
}

int my_is_prime(int nb)
{
    int mod = 2;
    
    if (nb < 2)
        return (0);
    else
        return (is_prime(mod, nb));
}
