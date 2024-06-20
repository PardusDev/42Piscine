/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci@student.42kocaeli.com.tr <ravci>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:50:17 by ravci@stude       #+#    #+#             */
/*   Updated: 2023/09/21 17:50:17 by ravci@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	i = 0;
	array = (int *) malloc(length * 4);
	if (!(array))
		return (0);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
