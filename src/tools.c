/*
** EPITECH PROJECT, 2018
** tools
** File description:
** tools
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <curses.h>
#include "my.h"

int is_good(char **map, int **ixes)
{
    int bol = 0;

    for (int n = 0; ixes[n] != NULL; n++) {
        if (map[ixes[n][0]][ixes[n][1]] != 'X')
            bol = 1;
    }
    if (bol == 0)
        return (1);
    return (-1);
}

char **print_tab(char **map, int **ixes)
{
    for (int n = 0; ixes[n] != NULL; n++) {
        if (map[ixes[n][0]][ixes[n][1]] != 'X')
            map[ixes[n][0]][ixes[n][1]] = 'O';
    }
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++)
            my_map_element(map[i][j]);
        printw("\n");
    }
    return (map);
}

int *intcpy(int *ori, int *pos)
{
    pos = malloc(sizeof(int) * 2);

    pos[0] = ori[0];
    pos[1] = ori[1];
    return (pos);
}

char **tabcpy(char **ref, char **map)
{
    int y = 0;

    for (y = 0; ref[y] != NULL; y++);
    map = malloc(sizeof(char *) * (y + 1));
    for (y = 0; ref[y] != NULL; y++)
        map[y] = my_strdup(ref[y]);
    map[y] = NULL;
    return (map);
}

int nb_ixes(char **map)
{
    int res = 0;

    for (int i = 0; map[i] != NULL; i++)
        for (int j = 0; map[i][j] != '\0'; j++)
            res += (map[i][j] == 'O') ? 1 : 0;
    return (res);
}