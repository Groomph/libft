/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:53:03 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 14:53:05 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tmp;
	size_t	i;

	size *= nmemb;
	if (!(tmp = malloc(sizeof(char) * size)))
		return (NULL);
	i = -1;
	while (++i < size)
		tmp[i] = 0;
	return ((void *)tmp);
}
