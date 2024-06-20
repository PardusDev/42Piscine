/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci@student.42kocaeli.com.tr <ravci>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:29:32 by ravci             #+#    #+#             */
/*   Updated: 2023/09/12 21:11:37 by ravci@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	new_len(char **strs, int size, int seplength)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		len += seplength;
		i++;
	}
	len -= seplength;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstr;
	int		i;

	i = 0;
	if (size == 0)
		return ((char *) malloc(1));
	newstr = malloc (new_len(strs, size, ft_strlen(sep)) + 1);
	if (!newstr)
		return (0);
	while (i < size)
	{
		ft_strcat(newstr, strs[i]);
		if (i != size - 1)
			ft_strcat(newstr, sep);
		i++;
	}
	return (newstr);
}
