/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:21:37 by atangil           #+#    #+#             */
/*   Updated: 2024/07/23 19:57:24 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

typedef struct s_game
{
	char	*no_texture_path;
	char	*so_texture_path;
	char	*we_texture_path;
	char	*ea_texture_path;
	char	*f_color;
	char	*c_color;
	char	**map;
	// Add more variables here for mlx and stuff
}	t_game;

// utils :
void	ft_err(char *str);
int		is_cub(char *map_path);
char	*skip_spaces(char *str);

// get_data :
char	**map_init(char *map_path, t_game *game);
void	get_data(char **map, t_game *game, int i);
void	check_copies(char **map);
char	**fill_n_check(char **map);

// game_core :
void	ft_cub3d(char **map, t_game *game);

// temp :
void	print_map(char **map);
void	test_print(t_game *game);

#endif
