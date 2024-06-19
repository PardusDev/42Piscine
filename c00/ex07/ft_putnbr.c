/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:47:36 by ravci             #+#    #+#             */
/*   Updated: 2023/08/30 11:47:36 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
	{
		nb = nb * -1;
		write(1, &"-", 1);
		ft_putnbr(2);
		ft_putnbr(147483648);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		write(1, &"-", 1);
		ft_putnbr(nb);
	}
	else 
	{
		a = nb + 48;
		write(1, &a, 1);
	}
}
