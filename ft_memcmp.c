/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:59:17 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 14:59:18 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmpsrc1;
	unsigned char	*tmpsrc2;

	i = -1;
	tmpsrc1 = (unsigned char *)s1;
	tmpsrc2 = (unsigned char *)s2;
	while (++i < n)
	{
		if (tmpsrc1[i] != tmpsrc2[i])
			return (tmpsrc1[i] - tmpsrc2[i]);
	}
	return (0);
}
