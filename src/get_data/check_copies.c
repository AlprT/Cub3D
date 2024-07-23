/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_copies.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:02:39 by atangil           #+#    #+#             */
/*   Updated: 2024/07/23 19:43:42 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"
#include "../libft/libft.h"

void	check_copies(char **map)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (!ft_strncmp(skip_spaces(map[i]), "NO", 2))
			j++;
		else if (!ft_strncmp(skip_spaces(map[i]), "SO", 2))
			j++;
		else if (!ft_strncmp(skip_spaces(map[i]), "WE", 2))
			j++;
		else if (!ft_strncmp(skip_spaces(map[i]), "EA", 2))
			j++;
		else if (!ft_strncmp(skip_spaces(map[i]), "F", 1))
			j++;
		else if (!ft_strncmp(skip_spaces(map[i]), "C", 1))
			j++;
		i++;
	}
	if (j != 6)
		ft_err("Error\nInvalid map\n");
}
