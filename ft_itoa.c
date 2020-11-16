/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 09:27:28 by romain            #+#    #+#             */
/*   Updated: 2020/11/08 06:55:12 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		taille;
	unsigned int	tmp;
	char		*str;

	taille = n < 0 ? 2 : 1;
	tmp = n < 0 ? -n : n;
	while (tmp /= 10)
		taille++;
	if (!(str = malloc(sizeof(char) * taille + 1)))
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[taille--] = '\0';
	if (n == 0)
		str[0] = '0';
	tmp = n < 0 ? -n : n;
	while (tmp)
	{
		str[taille--] = (tmp % 10) + '0';
		tmp /= 10;
	}	
	return (str);
}

