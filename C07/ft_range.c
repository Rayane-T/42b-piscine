/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:33:57 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/12 16:05:00 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*int_arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;

	int_arr = malloc(sizeof(int) * size);
	int_arr[0] = min;
	while (int_arr[i] != max)
	{
		int_arr[i] = min + 1;
		i++;
		min++;
	}
	int_arr[i] = max;
	return (int_arr);
}
