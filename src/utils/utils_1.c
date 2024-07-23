/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:47:04 by atangil           #+#    #+#             */
/*   Updated: 2024/07/23 20:23:50 by atangil          ###   ########.fr       */
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

char	**fill_n_check(char **map)
{
	int			i;
	int			j;
	int			flag;

	flag = 0;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j]) 
		{
			if (map[i][j] == 'N' || map[i][j] == 'S'
				|| map[i][j] == 'W' || map[i][j] == 'E')
				flag++;
			else if (map[i][j] == ' ')
				map[i][j] = '0';
			else if (map[i][j] != '1' && map[i][j] != '0')
				ft_err("Error\nUnrecognized character in map\n");
			j++;
		}
		i++;
	}
	if (flag != 1)
		ft_err("Error\nInvalid player count\n");
	return (map);
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
	printf("MAP:\n");
	print_map(game->map);
}
