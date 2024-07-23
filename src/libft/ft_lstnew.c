/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atangil <atangil@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:35:15 by atangil           #+#    #+#             */
/*   Updated: 2023/07/22 16:32:58 by atangil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nw;

	nw = malloc(sizeof(t_list));
	if (!nw)
		return (0);
	nw -> next = NULL;
	nw -> content = content;
	return (nw);
}
