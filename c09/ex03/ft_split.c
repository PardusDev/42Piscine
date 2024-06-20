/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci <ravci@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:17:35 by ravci             #+#    #+#             */
/*   Updated: 2023/09/17 18:39:32 by ravci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{

	}
}

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	j;
	int	word_count;

	i = 0;
	j = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != charset[i] && check_sep(str[i - 1], charset)) 
			word_count++;
		i++;
	}
	return (word_count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**result;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (result);
}

#include <stdio.h>
int main(void)
{
	printf("%d", word_count("  a    b   c     d       e", " "));
}