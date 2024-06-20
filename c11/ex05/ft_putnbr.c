/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci@student.42kocaeli.com.tr <ravci>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:18:34 by ravci@stude       #+#    #+#             */
/*   Updated: 2023/09/21 19:18:34 by ravci@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	else
	{
		a = nb + 48;
		write(1, &a, 1);
	}
}
