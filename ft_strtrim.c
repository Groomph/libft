/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:13:41 by romain            #+#    #+#             */
/*   Updated: 2020/11/07 05:55:06 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char const c, char const *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (!s1)
		return (NULL);
	while (isset(*s1, set))
		s1++;	
	while (s1[i])
	{
		if (isset(s1[i++], set))
			i2++;
		else if (i2 > 0)
			i2 = 0;
	}
	i -= i2;
	if (!(tmp = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	tmp[i] = '\0';
	while (--i >= 0)
		tmp[i] = s1[i];
	return (tmp);
}
