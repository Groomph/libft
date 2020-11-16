/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 08:15:29 by romain            #+#    #+#             */
/*   Updated: 2020/11/07 04:30:28 by romain           ###   ########.fr       */
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
