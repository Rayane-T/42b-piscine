/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:58:20 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/14 14:46:39 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	digits;

	index = 0;
	digits = 0;
	while (str[index] != '\0')
	{
		if ('0' <= str[index] && str[index] <= '9')
		{
			digits++;
		}
		index++;
	}
	if (index != digits)
	{
		return (0);
	}
	return (1);
}
