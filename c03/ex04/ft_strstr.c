/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:07:24 by ravci             #+#    #+#             */
/*   Updated: 2023/09/03 18:08:41 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		len;
	int		n;
	char	*finded_str;

	len = 0;
	n = 0;
	while (str[len] != '\0')
	{
		if (str[len] == to_find[n])
		{
			finded_str[n] = str[len];
			n++;
		}
		len++;
	}
	return (finded_str);
}
