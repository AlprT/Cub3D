/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:47:04 by atangil           #+#    #+#             */
/*   Updated: 2024/07/27 18:34:20 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

//temp
#include "../../inc/cub3d.h"
#include <stdio.h>

int	is_cub(char *map_path)
{
	return (!ft_strncmp(map_path + ft_strlen(map_path) - 4, ".cub", 5));
}

char	*skip_spaces(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}

void	ft_err(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}

void	print_map(char **map)//temp
{
	int	i;

	i = 0;
	while (map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
}

void	test_print(t_game *game)//temp
{
	printf("NO: %s\n", game->no_texture_path);
	printf("SO: %s\n", game->so_texture_path);
	printf("WE: %s\n", game->we_texture_path);
	printf("EA: %s\n", game->ea_texture_path);
	printf("F: %s\n", game->f_color);
	printf("C: %s\n", game->c_color);
	printf("DIR: %c\n", game->p_dir);
	printf("MAP:\n");
	print_map(game->map);
}
