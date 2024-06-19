/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:39:37 by ravci             #+#    #+#             */
/*   Updated: 2023/08/30 11:39:37 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_writedouble(int a1, int a2)
{
	ft_write(48 + (a1 / 10));
	ft_write(48 + (a1 % 10));
	ft_write(' ');
	ft_write(48 + (a2 / 10));
	ft_write(48 + (a2 % 10));
	if (!(a1 == 98 && a2 == 99))
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a1;
	int	a2;

	a1 = 0;
	while (a1 <= 99)
	{
		a2 = a1 + 1;
		while (a2 <= 99)
		{
			ft_writedouble(a1, a2);
			a2++;
		}
		a1++;
	}
}
