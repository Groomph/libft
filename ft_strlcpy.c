/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:12:15 by romain            #+#    #+#             */
/*   Updated: 2020/11/08 03:56:49 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	len;

	if (!dst || !src)
		return (0);
	n = ft_strlen(src);
	if (size)
	{
		if (n >= size)
			len = size - 1;
		else
			len = n;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (n);
}
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dest)
		return (0);
	while (src && src[i])
		i++;
	if (i + 1 < dstsize)
		dstsize = i + 1;
	while (dstsize--)
	{
		if (dstsize > 0)
			*dest = *src++;
		else
			*dest = '\0';
		dest++;
	}
	return (i);
}
