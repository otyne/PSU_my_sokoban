/*
** EPITECH PROJECT, 2018
** startgame
** File description:
** same
*/

#include <signal.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include "my.h"

char *read_file(char *file)
{
	int	fd = 0;
	int	size = 0;
    struct stat *st = malloc(sizeof(struct stat));
    char *result = NULL;

	fd = open(file, O_RDONLY);
    stat(file, st);
    size = st->st_size;
    result = malloc(size + 1);
    result[size] = '\0';
	if (fd == -1)
		return (NULL);
	else
		while (size != 0)
	        size = read(fd, result, size);
	close(fd);
    free(st);
	return (result);
}
