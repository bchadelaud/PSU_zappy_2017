/*
** EPITECH PROJECT, 2018
** zappy
** File description:
** test criterion return of eject
*/

#include "game.h"

Test(broadcast, find_msg)
{
	t_game_p *game = game_init(10, 10, 100);
	t_player_p *player;
	t_player_p *player2;
	char *str[2];
	str[0] = "poulet";
	str[1] = NULL;
	init_teams(game, str, 2);
	player = init_player(game, 1, "poulet");
	player2 = init_player(game, 2, "poulet");
	if (player->x == player2->x && player->y > player2->y)
		cr_assert_eq(broadcast(game, player, player2)[0], '1' + 48);
	if (player->x > player2->x && player->y > player2->y)
		cr_assert_eq(broadcast(game, player, player2)[0], '2' + 48);
	if (player->x > player2->x && player->y == player2->y)
		cr_assert_eq(broadcast(game, player, player2)[0], '3' + 48);
	if (player->x > player2->x && player->y < player2->y)
		cr_assert_eq(broadcast(game, player, player2)[0], '4' + 48);
	if (player->x == player2->x && player->y < player2->y)
		cr_assert_eq(broadcast(game, player, player2)[0], '5' + 48);
	if (player->x < player2->x && player->y < player2->y)
		cr_assert_eq(broadcast(game, player, player2)[0], '6' + 48);
	if (player->x < player2->x && player->y == player2->y)
		cr_assert_eq(broadcast(game, player, player2)[0], '7' + 48);
	if (player->x < player2->x && player->y > player2->y)
		cr_assert_eq(broadcast(game, player, player2)[0], '8' + 48);
	if (player->x == player2->x && player->y == player2->y)
		cr_assert_eq(broadcast(game, player, player2)[0], '0' + 48);
}
