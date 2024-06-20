/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:50:00 by ravci             #+#    #+#             */
/*   Updated: 2023/09/03 18:08:14 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	n;

	len = 0;
	n = 0;
	while (dest[len] != '\0')
		len++;
	while (src[n] != '\0')
	{
		dest[len] = src[n];
		n++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
