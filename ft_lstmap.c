/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:50:45 by romain            #+#    #+#             */
/*   Updated: 2020/11/09 05:32:06 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list	*first;
	void	*temp;

	first = NULL;
	while (lst && f)
	{
		temp = f(lst->content);
		if (!temp)
		{
			if (del)
				ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, ft_lstnew(temp));
		lst = lst->next;
	}
	return (first);
}
