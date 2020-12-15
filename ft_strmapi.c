/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:06:17 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 15:06:18 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*temp;

	if (!f || !s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(temp = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	temp[i] = '\0';
	while (i > 0)
	{
		i--;
		temp[i] = f(i, s[i]);
	}
	return (temp);
}
