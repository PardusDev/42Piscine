/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:48:01 by ravci             #+#    #+#             */
/*   Updated: 2023/09/01 10:42:49 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;
	int	tmp;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		tmp = tab[i];
		tab[i] = tab[end];
		tab[end] = tmp;
		i++;
		end--;
	}
}
