/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** colors
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <curses.h>
#include "my.h"

void sokolors(void)
{
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_YELLOW, COLOR_BLACK);
    init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(4, COLOR_CYAN, COLOR_BLACK);
    noecho();
    curs_set(0);
}

void my_map_element(char c)
{
    if (c == 'X')
        attron(COLOR_PAIR(4));
    else if (c == 'O')
        attron(COLOR_PAIR(3));
    else
        attron(COLOR_PAIR(2));
    printw("%c", c);
}