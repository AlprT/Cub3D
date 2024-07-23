/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:19:09 by atangil           #+#    #+#             */
/*   Updated: 2023/07/22 16:32:46 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*pdest;
	const char	*psrc;
	size_t		n;

	pdest = (char *)dest;
	psrc = (const char *)src;
	if (!pdest && !psrc)
		return (dest);
	n = 0;
	while (n < len)
	{
		pdest[n] = psrc[n];
		n++;
	}
	return (dest);
}
