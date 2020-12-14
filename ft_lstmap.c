/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:50:45 by romain            #+#    #+#             */
/*   Updated: 2020/12/14 17:46:37 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*temp;

	first = NULL;
	while (lst && f)
	{
		if (!(temp = f(lst->content)))
		{
			if (del)
				ft_lstclear(&first, del);
			return (NULL);
		}
		if (!(new = ft_lstnew(temp)) && del)
		{
			ft_lstclear(&first, del);
			del(temp);
		}
		if (!new)
			return (NULL);
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
