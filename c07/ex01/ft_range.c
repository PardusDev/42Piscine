/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:55:25 by ravci             #+#    #+#             */
/*   Updated: 2023/09/12 10:57:34 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	index;
	int	*tab;

	a = max - min;
	if (a <= 0)
		return (0);
	tab = (int *) malloc (a * 4);
	if (!(tab))
	{
		return (0);
	}
	index = 0;
	while ((min + index) < max)
	{
		tab[index] = min + index;
		index++;
	}
	return (tab);
}
