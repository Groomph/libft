/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:59:03 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 14:59:04 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmpsrc;

	i = -1;
	tmpsrc = (unsigned char *)src;
	while (++i < n)
	{
		if ((unsigned char)c == tmpsrc[i])
			return (&tmpsrc[i]);
	}
	return (NULL);
}
