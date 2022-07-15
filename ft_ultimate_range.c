/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:17:26 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/13 14:48:57 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*ret;

	i = 0;
	size = max - min;
	ret = malloc(sizeof(int) * size);
	if (!ret)
	{
		return (-1);
	}
	if (min >= max)
	{
		ret = NULL;
		return (0);
	}
	while (i < size)
	{
		ret[i] = min;
		i++;
		min++;
	}
	*range = ret;
	return (i);
}

int	main(void)
{
	int	min;
	int	max;
	int	*range;

	min = 5;
	max = 10;
	printf("%d", ft_ultimate_range(&range, min, max));
	return (0);
}
