/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <curses.h>
#include "my.h"

int *move_cursor(char ***map, int *pos, int k)
{
    if (k == KEY_UP)
        pos[0] -= move_up(map, pos);
    else if (k == KEY_DOWN)
        pos[0] += move_down(map, pos);
    else {
        if (k == KEY_LEFT)
            pos[1] -= move_left(map, pos);
        else if (k == KEY_RIGHT)
            pos[1] += move_right(map, pos);
    }
    return (pos);
}

int move_up(char ***map, int *pos)
{
    if ((*map)[pos[0] - 1][pos[1]] == '#')
        return (0);
    else if ((*map)[pos[0] - 1][pos[1]] == 'X') {
        if ((*map)[pos[0] - 2][pos[1]] != ' ' &&
            (*map)[pos[0] - 2][pos[1]] != 'O')
            return (0);
        else {
            (*map)[pos[0] - 1][pos[1]] = ' ';
            (*map)[pos[0] - 2][pos[1]] = 'X';
        }
    }
    return (1);
}

int move_down(char ***map, int *pos)
{
    if ((*map)[pos[0] + 1][pos[1]] == '#')
        return (0);
    else if ((*map)[pos[0] + 1][pos[1]] == 'X') {
        if ((*map)[pos[0] + 2][pos[1]] != ' ' &&
            (*map)[pos[0] + 2][pos[1]] != 'O')
           return (0);
        else {
            (*map)[pos[0] + 1][pos[1]] = ' ';
            (*map)[pos[0] + 2][pos[1]] = 'X';
        }
    }
    return (1);
}

int move_left(char ***map, int *pos)
{
    if ((*map)[pos[0]][pos[1] - 1] == '#')
        return (0);
    else if ((*map)[pos[0]][pos[1] - 1] == 'X') {
        if ((*map)[pos[0]][pos[1] - 2] != ' ' &&
            (*map)[pos[0]][pos[1] - 2] != 'O')
            return (0);
        else {
            (*map)[pos[0]][pos[1] - 1] = ' ';
            (*map)[pos[0]][pos[1] - 2] = 'X';
        }
    }
    return (1);
}

int move_right(char ***map, int *pos)
{
    if ((*map)[pos[0]][pos[1] + 1] == '#')
        return (0);
    else if ((*map)[pos[0]][pos[1] + 1] == 'X') {
        if ((*map)[pos[0]][pos[1] + 2] != ' ' &&
            (*map)[pos[0]][pos[1] + 2] != 'O')
            return (0);
        else {
            (*map)[pos[0]][pos[1] + 1] = ' ';
            (*map)[pos[0]][pos[1] + 2] = 'X';
        }
    }
    return (1);
}