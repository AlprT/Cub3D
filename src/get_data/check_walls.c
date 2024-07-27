/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:27:59 by atangil           #+#    #+#             */
/*   Updated: 2024/07/27 18:41:55 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"
#include "../libft/libft.h"
#include <stdio.h>

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
			{
				if (map[i][j + 1] == ' ' || map[i][j - 1] == ' ' ||
				map[i + 1][j] == ' ' || map[i - 1][j] == ' ' ||
				map[i][j + 1] == '\0' || map[i][j - 1] == '\0' ||
				map[i + 1][j] == '\0' || map[i - 1][j] == '\0' ||
				map[i + 1][j + 1] == ' ' || map[i + 1][j - 1] == ' ' ||
				map[i - 1][j + 1] == ' ' || map[i - 1][j - 1] == ' ' ||
				map[i + 1][j + 1] == '\0' || map[i + 1][j - 1] == '\0' ||
				map[i - 1][j + 1] == '\0' || map[i - 1][j - 1] == '\0')
					ft_err("Error\nInvalid map\n");
			}
			j++;
		}
		i++;
	}
}
