/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:07:43 by atangil           #+#    #+#             */
/*   Updated: 2024/07/27 18:41:42 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

static void	get_dir(t_game *game, int i, int j, int *flag)
{
	if (game->map[i][j] == 'N')
		game->p_dir = 'N';
	else if (game->map[i][j] == 'S')
		game->p_dir = 'S';
	else if (game->map[i][j] == 'W')
		game->p_dir = 'W';
	else if (game->map[i][j] == 'E')
		game->p_dir = 'E';
	(*flag)++;
}

char	**check_chars(t_game *game, char **map)
{
	int			i;
	int			j;
	int			flag;

	flag = 0;
	i = -1;
	j = -1;
	while (map[++i])
	{
		j = 0;
		while (map[i][++j]) 
		{
			if (map[i][j] == 'N' || map[i][j] == 'S' ||
			map[i][j] == 'W' || map[i][j] == 'E')
			{
				get_dir(game, i, j, &flag);
				map[i][j] = 'P';
			}
			else if (map[i][j] != '1' && map[i][j] != '0' && map[i][j] != ' ')
				ft_err("Error\nUnrecognized character in map\n");
		}
	}
	if (flag != 1)
		ft_err("Error\nInvalid player count\n");
	return (map);
}
