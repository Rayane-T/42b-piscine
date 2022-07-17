/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 07:22:23 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/13 21:14:34 by rtayache         ###   ########.fr       */
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
		if (97 <= str[i] <= 122)
		{
			count++;
		}
		i++;
	}
	if (i != count)
		return (0);
	return (1);
}
