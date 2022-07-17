/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:36:35 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/14 14:50:01 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (65 <= str[i] <= 90)
		{
			count++;
		}
		i++;
	}
	if (i != count)
	{
		return (0);
	}
	return (1);
}
