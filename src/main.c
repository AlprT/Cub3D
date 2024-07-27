/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:41:52 by atangil           #+#    #+#             */
/*   Updated: 2024/07/27 18:40:56 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx/mlx.h"
#include "libft/libft.h"
#include "../inc/cub3d.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_game	*game;

	game = (t_game *)malloc(sizeof(t_game));
	if (argc != 1)
		ft_cub3d(map_init(argv[1], game), game);
	else
		ft_err("Too many/missing arguments\n");
}
