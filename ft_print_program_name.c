/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <rtayache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:24:29 by rtayache          #+#    #+#             */
/*   Updated: 2022/07/14 16:08:30 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	c;

	c = 0;
	if (argc > 0)
	{
		while (argv[0][c] != '\0')
		{
			ft_putchar(argv[0][c]);
			c++;
		}
	}
	return (0);
}
