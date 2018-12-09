/*
** EPITECH PROJECT, 2018
** my swap
** File description:
** swap content of two int
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int tmp = *b;

    *b = *a;
    *a = tmp;
}
