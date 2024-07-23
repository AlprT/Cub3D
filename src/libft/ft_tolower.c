/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 01:11:43 by atangil           #+#    #+#             */
/*   Updated: 2023/07/22 16:30:43 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int num)
{
	if ((num >= 'A' && num <= 'Z') && ft_isascii(num))
		return (num + 32);
	return (num);
}

// uppercase to lowercase
