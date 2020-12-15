/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:02:08 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 15:02:10 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*temp;

	i = 0;
	while (s[i])
		i++;
	if (!(temp = malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = -1;
	while (s[++i])
		temp[i] = s[i];
	temp[i] = '\0';
	return (temp);
}
