/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci@student.42kocaeli.com.tr <ravci>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:32:28 by ravci@stude       #+#    #+#             */
/*   Updated: 2023/09/21 19:32:28 by ravci@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_add(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int	ft_sub(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int	ft_multiple(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int	ft_div(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int	ft_mod(int nb1, int nb2)
{
	return (nb1 % nb2);
}
