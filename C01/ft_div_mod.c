/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:41:15 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/01 12:10:39 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	printf("%d", *div);
}

int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;


	a = 10;
	b = 5;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
}
