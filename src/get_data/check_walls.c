/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:27:59 by atangil           #+#    #+#             */
/*   Updated: 2024/07/28 18:28:16 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

static void	get_map_len(char **map, int *maxl)
{
	while (map[*maxl])
		(*maxl)++;
}

static void	check_walls_sub(char **map, int *i, int *j)
{
	int	maxl;

	maxl = 0;
	get_map_len(map, &maxl);
	if (*i == 0 || *j == 0 || *i == maxl - 1
		|| map[*i + 1][*j] == '\0' || map[*i][*j + 1] == '\0'
		|| map[*i - 1][*j] == '\0' || map[*i][*j - 1] == '\0'
		|| map[*i + 1][*j] == ' ' || map[*i][*j + 1] == ' '
		|| map[*i - 1][*j] == ' ' || map[*i][*j - 1] == ' '
		|| map[*i + 1][*j + 1] == ' ' || map[*i - 1][*j - 1] == ' '
		|| map[*i + 1][*j - 1] == ' ' || map[*i - 1][*j + 1] == ' '
		|| map[*i + 1][*j + 1] == '\0' || map[*i - 1][*j - 1] == '\0'
		|| map[*i + 1][*j - 1] == '\0' || map[*i - 1][*j + 1] == '\0')
		ft_err("Error\nInvalid map\n");
}

void	check_walls(char **map)
{
	int		i;
	int		j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == '0' || map[i][j] == 'P')
				check_walls_sub(map, &i, &j);
			j++;
		}
		i++;
	}
}
