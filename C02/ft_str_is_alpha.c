/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:45:24 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/14 15:11:36 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;
	int	a;

	alpha = 0;
	i = 0;
	while (str[i])
	{
		a = 97;
		while (a <= 122)
		{
			if (str[i] == a)
			{
				alpha++;
			}
			a++;
		}
		i++;
	}
	if (alpha != i)
	{
		return (0);
	}
	i++;
	return (1);
}
