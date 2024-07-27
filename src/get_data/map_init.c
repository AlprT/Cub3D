/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:28:28 by atangil           #+#    #+#             */
/*   Updated: 2024/07/27 18:38:02 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"
#include "../libft/libft.h"
#include <fcntl.h>
#include <unistd.h>

char	*read_map(char *map_path)
{
	int		fd;
	int		i;
	char	line[2];
	char	*join;

	fd = open(map_path, O_RDONLY);
	if (fd < 0)
		ft_err("Error\nMap could not be opened\n");
	i = read(fd, line, 1);
	line[i] = '\0';
	join = ft_strdup("");
	while (i)
	{
		join = ft_strjoin(join, line);
		if (!join)
			ft_err("Error\nJoin failed\n");
		i = read(fd, line, 1);
		line[i] = '\0';
	}
	return (close(fd), join);
}

int	get_data(char **map, t_game *game, int i)
{
	check_copies(map);

	if (!ft_strncmp(skip_spaces(map[i]), "NO", 2))
		game->no_texture_path = skip_spaces(skip_spaces(map[i]) + 2);
	else if (!ft_strncmp(skip_spaces(map[i]), "SO", 2))
		game->so_texture_path = skip_spaces(skip_spaces(map[i]) + 2);
	else if (!ft_strncmp(skip_spaces(map[i]), "WE", 2))
		game->we_texture_path = skip_spaces(skip_spaces(map[i]) + 2);
	else if (!ft_strncmp(skip_spaces(map[i]), "EA", 2))
		game->ea_texture_path = skip_spaces(skip_spaces(map[i]) + 2);
	else if (!ft_strncmp(skip_spaces(map[i]), "F", 1))
		game->f_color = skip_spaces(skip_spaces(map[i]) + 1);
	else if (!ft_strncmp(skip_spaces(map[i]), "C", 1))
		game->c_color = skip_spaces(skip_spaces(map[i]) + 1);
	else
		ft_err("Error\nInvalid map1\n");
	return (1);
}

char	**get_map(char *map_path, t_game *game)
{
	char	**map;
	int		i;
	int		flag;

	i = 0;
	(void)game;
	map = ft_split(read_map(map_path), '\n');
	flag = 0;
	i = 0;
	while ((map[i][0] != '1' || map[i][0] == '0') && flag != 6)
	{
		flag += get_data(map, game, i);
		i++;
	}
	game -> map = map + i;
	if (!game->no_texture_path || !game->so_texture_path
		|| !game->we_texture_path || !game->ea_texture_path
		|| !game->f_color || !game->c_color)
		ft_err("Error\nInvalid map\n");
	check_chars(game, game->map);
	return (map + i);
}

char	**map_init(char *map_path, t_game *game)
{
	if (!is_cub(map_path))
		ft_err("Error\nInvalid file extention\n");
	check_walls(get_map(map_path, game));
	test_print(game);//temp
	return (0);
}
