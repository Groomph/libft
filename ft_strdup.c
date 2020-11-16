/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 08:27:59 by romain            #+#    #+#             */
/*   Updated: 2020/11/07 04:33:43 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
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
