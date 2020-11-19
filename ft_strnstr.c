/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstrAREFAIRE.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 07:05:50 by romain            #+#    #+#             */
/*   Updated: 2020/11/06 14:59:28 by romain           ###   ########.fr       */
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
