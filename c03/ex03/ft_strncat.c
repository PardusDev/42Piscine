/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:00:10 by ravci             #+#    #+#             */
/*   Updated: 2023/09/03 18:15:29 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	n;

	len = 0;
	n = 0;
	while (dest[len] != '\0')
		len++;
	while (src[n] != '\0' && n < nb)
	{
		dest[len] = src[n];
		len++;
		n++;
	}
	dest[len] = '\0';
	return (dest);
}
