/*
** EPITECH PROJECT, 2018
** zappy
** File description:
** function point to drop and take
*/

#include "game.h"

static int linemate(t_player_p *player, t_game_p *game, int value)
{
        if (value < 0) {
                if (player->linemate > 0) {
			player->linemate -= 1;
			game->map[player->x][player->y].linemate += 1;
		}
                else
                    	return (-1);
	}
        else if (game->map[player->x][player->y].linemate != 0) {
		player->linemate += 1;
		game->map[player->x][player->y].linemate -= 1;
	}
        else
            	return (-1);
	return (0);
}

static int deraumere(t_player_p *player, t_game_p *game, int value)
{
	if (value < 0) {
                if (player->deraumere > 0) {
			player->deraumere -= 1;
			game->map[player->x][player->y].deraumere += 1;
		}
                else
                    	return (-1);
	}
        else if (game->map[player->x][player->y].deraumere != 0) {
		player->deraumere += 1;
		game->map[player->x][player->y].deraumere -= 1;
	}
        else
            	return (-1);
	return (0);
}

static int sibur(t_player_p *player, t_game_p *game, int value)
{
	if (value < 0) {
                if (player->sibur > 0) {
			player->sibur -= 1;
			game->map[player->x][player->y].sibur += 1;
		}
                else
                    	return (-1);
	}
        else if (game->map[player->x][player->y].sibur != 0) {
		player->sibur += 1;
		game->map[player->x][player->y].sibur -= 1;
	}
        else
            	return (-1);
	return (0);
}

static int mendiane(t_player_p *player, t_game_p *game, int value)
{
	if (value < 0) {
                if (player->mendiane > 0) {
			player->mendiane -= 1;
			game->map[player->x][player->y].mendiane += 1;
		}
                else
                    	return (-1);
	}
        else if (game->map[player->x][player->y].mendiane != 0) {
		player->mendiane += 1;
		game->map[player->x][player->y].mendiane -= 1;
	}
        else
            	return (-1);
	return (0);
}

static int phiras(t_player_p *player, t_game_p *game, int value)
{
	if (value < 0) {
                if (player->phiras > 0) {
			player->phiras -= 1;
			game->map[player->x][player->y].phiras += 1;
		}
                else
                    	return (-1);
	}
        else if (game->map[player->x][player->y].phiras != 0) {
		player->phiras += 1;
		game->map[player->x][player->y].phiras -= 1;
	}
        else
            	return (-1);
	return (0);
}
