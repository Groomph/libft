/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:12:15 by romain            #+#    #+#             */
/*   Updated: 2020/11/08 05:51:04 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	while (++i < dstsize && *dest)
		dest++;
	if (i == dstsize)
	{
		while (src[++j]){}
			return (i + j);
	}
	while (src[++j])
	{
		if (j + i < dstsize - 1)
			*dest++ = src[j];
		}
	*dest = '\0';
	return (i + j);
}
