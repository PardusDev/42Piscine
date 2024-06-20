/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:30:00 by ravci             #+#    #+#             */
/*   Updated: 2023/09/11 11:30:00 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	if (power < 0)
		return (0);
	return (result);
}
