/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:15:35 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/14 18:45:07 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	while (nb != 0)
	{
		nb *= (nb - 1);
		nb--;
	}
	return (nb);
}

int main(void)
{
	printf("%d", ft_iterative_factorial(3));
}
