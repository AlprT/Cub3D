/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:22:50 by atangil           #+#    #+#             */
/*   Updated: 2023/07/22 16:30:33 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int num)
{
	if ((num >= 'a' && num <= 'z') && ft_isascii(num))
		return (num - 32);
	return (num);
}

// Lowercase to uppercase
