/*
** EPITECH PROJECT, 2018
** my find prime sup
** File description:
** find next is prime
*/

#include "my.h"

static int prime_sup(int nb)
{
    if (my_is_prime(nb) == 1)
        return (nb);
    else
        prime_sup(nb + 1);
}

int my_find_prime_sup(int nb)
{
    if (nb < 2)
        return (2);
    else
        return (prime_sup(nb));
}
