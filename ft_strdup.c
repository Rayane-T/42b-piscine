/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:55:05 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/12 15:33:18 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new)
	{
		return (NULL);
	}
	while (*src)
	{
		new[i++] = *src++;
	}
	new[i] = '\0';
	return (new);
}
