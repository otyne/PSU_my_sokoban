/*
** EPITECH PROJECT, 2018
** my str str
** File description:
** find occurence in a strinf
*/

#include <unistd.h>
#include "my.h"

int to_find_len(char const *to_find)
{
    int i = 0;

    while (to_find[i] != '\0')
        i += 1;
    return (i);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int tf_end = to_find_len(to_find);

    if (*str == '\0')
        return (NULL);
    while (str[i] != to_find[i] && str[i] != '\0')
        str += 1;
    if (str[i] != '\0') {
        while (str[i] == to_find[i] && str[i] != '\0' && to_find[i] != '\0')
            i += 1;
        if (i == tf_end)
            return (str);
        else if (str[i] != '\0')
            return (my_strstr(str + 1, to_find));
        else
            return (NULL);
    } else
        return (NULL);
}
