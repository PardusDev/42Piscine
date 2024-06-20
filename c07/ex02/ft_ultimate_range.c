/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci@student.42kocaeli.com.tr <ravci>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:26:25 by ravci             #+#    #+#             */
/*   Updated: 2023/09/12 20:39:15 by ravci@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc ((max - min) * 4);
	if (*range == NULL)
		return (-1);
	index = 0;
	while ((min + index) < max)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (index);
}
