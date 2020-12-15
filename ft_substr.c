/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:08:02 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 15:08:03 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	size_t			i;
	unsigned int	size;

	if (!s)
		return (NULL);
	size = 0;
	while (s[size])
		size++;
	if (size < start)
	{
		if (!(tmp = malloc(sizeof(char))))
			return (NULL);
		tmp[0] = '\0';
		return (tmp);
	}
	if (size < start + len)
		len = size - start;
	if (!(tmp = malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = -1;
	while (++i < len && s[start + i])
		tmp[i] = s[start + i];
	tmp[i] = '\0';
	return (tmp);
}
