/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 00:55:45 by romain            #+#    #+#             */
/*   Updated: 2020/11/16 15:17:56 by rsanchez         ###   ########.fr       */
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
