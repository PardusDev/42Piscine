/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci@student.42kocaeli.com.tr <ravci>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:24:25 by ravci@stude       #+#    #+#             */
/*   Updated: 2023/09/21 19:24:25 by ravci@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_do_op(char **argv, int nbr1, int nbr2)
{
	if (!ft_strcmp(argv[2], "+"))
		ft_putnbr(ft_add(nbr1, nbr2));
	else if (!ft_strcmp(argv[2], "-"))
		ft_putnbr(ft_sub(nbr1, nbr2));
	else if (!ft_strcmp(argv[2], "*"))
		ft_putnbr(ft_multiple(nbr1, nbr2));
	else if (!ft_strcmp(argv[2], "/"))
	{
		if (nbr2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(ft_div(nbr1, nbr2));
	}
	else if (!ft_strcmp(argv[2], "%"))
	{
		if (nbr2 == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(ft_mod(nbr1, nbr2));
	}
	else
		ft_putnbr(0);
}

int	main(int argc, char **argv)
{
	int		nbr1;
	int		nbr2;

	if (argc == 4)
	{
		nbr1 = ft_atoi(argv[1]);
		nbr2 = ft_atoi(argv[3]);
		ft_do_op(argv, nbr1, nbr2);
		write(1, "\n", 1);
	}
	return (0);
}
