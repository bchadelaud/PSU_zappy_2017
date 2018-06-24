/*
** EPITECH PROJECT, 2018
** zappy
** File description:
** death of a client for g client
*/

#include "game.h"

char *death(t_player_p *player)
{
	char *result;
	int size = 0;
	size += getsize_int_to_str(player->id);
	size += 4;
	result = malloc(sizeof(char) * size + 1);
	if (result == NULL)
		return (NULL);
	result[0] = 0;
	result = add_str(result, "pdi ");
	result = add_int(result, player->id);
	result[size] = 0;
	return (result);
}
