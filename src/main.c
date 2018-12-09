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

void free_all(char **ref, char **map, int *ori, int *pos)
{
    for (int i = 0; ref[i] != NULL; i++) {
        free(ref[i]);
        free(map[i]);
    }
    free(ref);
    free(map);
    free(ori);
    free(pos);
}

int main(int ac, char **av)
{
    int res = 0;
    char *pre_map = NULL;
    char **map = NULL;
    char **ref = NULL;
    int *ori = NULL;
    int *pos = malloc(sizeof(int) * 2);

    if (ac != 2)
        return (84);
    pre_map = read_file(av[1]);
    map = my_str_to_word_tab(pre_map, '\n');
    pos = find_position(map, pos);
    map[pos[0]][pos[1]] = ' ';
    ori = intcpy(pos, ori);
    ref = tabcpy(map, ref);
    res = my_sokoban(ref, map, ori, pos);
    free(pre_map);
    free_all(ref, map, ori, pos);
    return (res);
}