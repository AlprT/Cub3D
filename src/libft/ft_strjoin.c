/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:23:26 by atangil           #+#    #+#             */
/*   Updated: 2023/07/22 16:32:12 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	size_t	i;
	size_t	j;

	final = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!final)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		final[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		final[i] = s2[j];
		i++;
		j++;
	}
	final[i] = '\0';
	return (final);
}
