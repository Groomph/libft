/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:59:47 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 14:59:48 by rsanchez         ###   ########.fr       */
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
