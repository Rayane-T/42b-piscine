/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:12:40 by rtayache          #+#    #+#             */
/*   Updated: 2022/06/30 18:45:01 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, 'N', 1);
	}
	if (n >= 0)
	{
		write(1, 'P', 1);
	}
}
