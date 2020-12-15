/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:56:08 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 14:56:09 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del && *lst)
	{
		ft_lstclear(&((*lst)->next), del);
		del((*lst)->content);
		free(*lst);
		*lst = NULL;
	}
}
