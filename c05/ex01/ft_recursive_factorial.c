/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:30:06 by ravci             #+#    #+#             */
/*   Updated: 2023/09/11 11:30:06 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb <= 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
