/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 00:55:45 by romain            #+#    #+#             */
/*   Updated: 2020/11/08 05:15:45 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tmpdest;
	const char	*tmpsrc;

	if (!dest && !src)
		return (NULL);
	tmpdest = (char *)dest;
	tmpsrc = (char *)src;
	if (tmpdest < tmpsrc)
	{
		i = -1;
		while (++i < n)
			tmpdest[i] = tmpsrc[i];
	}
	else
	{
		tmpdest += n;
		tmpsrc += n;
		while (n--)
			*(--tmpdest) = *(--tmpsrc);
	}
	return (dest);
}
