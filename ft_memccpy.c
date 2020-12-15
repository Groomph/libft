/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:58:49 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 14:58:51 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	i = -1;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	while (++i < n)
	{
		tmp_dest[i] = tmp_src[i];
		if (tmp_src[i] == (unsigned char)c)
			return (&tmp_dest[i + 1]);
	}
	return (NULL);
}
