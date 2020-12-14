/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 06:13:52 by romain            #+#    #+#             */
/*   Updated: 2020/12/14 17:05:10 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cleaner(char **tmp, int i)
{
	while (--i > 0)
		free(tmp[i]);
	free(tmp);
	return (1);
}

static const char	*filltab(char **tmp, const char *s, char c)
{
	int	i;
	int	i2;

	i = 0;
	while (*s && *s == c)
		s++;
	while (s[i] && s[i] != c)
		i++;
	if (!(*tmp = malloc(sizeof(char) * (i + 1))))
		return (s);
	i2 = -1;
	while (++i2 < i)
		(*tmp)[i2] = s[i2];
	(*tmp)[i2] = '\0';
	return (&s[i2]);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	int		check;
	char	**tmp;

	i = -1;
	check = 1;
	count = 0;
	while (s && s[++i])
	{
		if (s[i] == c)
			check++;
		else if (check && ++count)
			check = 0;
	}
	if (!(tmp = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	i = -1;
	while (++i < count)
		if (!(s = filltab(&tmp[i], s, c)) && cleaner(tmp, i))
			return (NULL);
	tmp[count] = NULL;
	return (tmp);
}
