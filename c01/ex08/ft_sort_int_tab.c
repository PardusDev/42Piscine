/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:00:52 by ravci             #+#    #+#             */
/*   Updated: 2023/09/01 10:42:21 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	tmp;

	i = 0;
	while (i < size)
	{
		k = i + 1;
		while (k < size)
		{
			if (tab[i] > tab[k])
			{
				ft_swap(&tab[i], &tab[k]);
			}
			k++;
		}
		i++;
	}
}
