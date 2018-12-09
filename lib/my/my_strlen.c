/*
** EPITECH PROJECT, 2018
** my strlen
** File description:
** length of a string
*/

#include "my.h"

int my_strlen(char const *str)
{
    return ((*str != '\0') ? 1 + my_strlen(str + 1) : 0);
}