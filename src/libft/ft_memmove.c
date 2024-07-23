/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:25:42 by atangil           #+#    #+#             */
/*   Updated: 2023/07/22 16:32:42 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*psrc;
	char	*pdest;

	psrc = (char *)src;
	pdest = (char *)dest;
	if (psrc < pdest)
	{
		while (len--)
			pdest[len] = psrc[len];
	}
	else
		ft_memcpy(pdest, psrc, len);
	return (dest);
}
