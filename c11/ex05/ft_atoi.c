/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci@student.42kocaeli.com.tr <ravci>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:35:19 by ravci@stude       #+#    #+#             */
/*   Updated: 2023/09/21 19:35:19 by ravci@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	len;

	len = 0;
	result = 0;
	sign = 1;
	while ((str[len] >= 9 && str[len] <= 13) || str[len] == 32)
		len++;
	while (str[len] == '-' || str[len] == '+')
	{
		if (str[len] == '-')
			sign *= -1;
		len++;
	}
	while ((str[len] >= 48 && str[len] <= 57) && str[len])
	{
		result = result * 10 + (str[len] - '0');
		len++;
	}
	return (sign * result);
}
