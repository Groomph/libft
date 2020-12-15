/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:59:34 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 14:59:35 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	if (!dest && !src)
		return (NULL);
	i = -1;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	while (++i < n)
		tmp_dest[i] = tmp_src[i];
	return (dest);
}
