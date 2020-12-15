/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <rsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:55:23 by rsanchez          #+#    #+#             */
/*   Updated: 2020/12/15 14:55:25 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				taille;
	unsigned int	tmp;
	char			*str;

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
