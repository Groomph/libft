/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:25:47 by romain            #+#    #+#             */
/*   Updated: 2020/11/08 07:24:14 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*temp;

	if (!f || !s)
		return (NULL);
	i = -1;
	while(s[++i]);
	if (!(temp = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	temp[i] = '\0';
	while (--i >= 0)
		temp[i] = f(i, s[i]);
	return (temp);
	
}
