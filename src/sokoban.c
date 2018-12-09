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

int *find_position(char **map, int *pos)
{
    int x = 0;
    int y = 0;

    for (y = 0; map[y] != NULL; y++) {
        for (x = 0; map[y][x] != '\0'; x++) {
            pos[0] = (map[y][x] == 'P') ? y : pos[0];
            pos[1] = (map[y][x] == 'P') ? x : pos[1];
        }
    }
    return (pos);
}

void reset_game(char **ref, char ***map, int *ori, int **pos)
{
    *map = tabcpy(ref, *map);
    *pos = intcpy(ori, *pos);
}

int check_line(int k, int ***ixes, int i, char **map)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == 'O') {
            (*ixes)[k] = malloc(sizeof(int) * 2);
            (*ixes)[k][0] = i;
            (*ixes)[k][1] = j;
            k++;
        }
    }
    return (k); 
}

int **get_ixes(char **map)
{
    int k = 0;
    int x = nb_ixes(map);
    int **ixes = malloc(sizeof(int *) * (x + 1));

    for (int i = 0; map[i] != NULL; i++)
        k = check_line(k, &ixes, i, map);
    ixes[k] = NULL;
    return (ixes);
}

int my_sokoban(char **ref, char **map, int *ori, int *pos)
{
    int k = 0;
    WINDOW	*game;
    int **ixes = get_ixes(map);

	game = initscr();
	keypad(game, TRUE);
    sokolors();
	while (k != 27 && is_good(map, ixes) == -1) {
        map = print_tab(map, ixes);
        attron(COLOR_PAIR(1));
        mvprintw(pos[0], pos[1], "P");
		k = getch();
        if (k == 32)
            reset_game(ref, &map, ori, &pos);
        pos = move_cursor(&map, pos, k);
    	refresh();
        clear();
	}
	endwin();
    return (is_good(map, ixes));
}
