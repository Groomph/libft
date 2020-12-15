/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:07:03 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 15:07:06 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*s2)
		return ((char*)(s1));
	while (s1[i] && i + j < len)
	{
		if (s1[i + j] == s2[j])
		{
			if (!s2[++j])
				return ((char *)&s1[i]);
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (NULL);
}
