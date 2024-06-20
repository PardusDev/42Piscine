/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravci@student.42kocaeli.com.tr <ravci>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:11:26 by ravci@stude       #+#    #+#             */
/*   Updated: 2023/09/21 19:11:26 by ravci@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	ft_putnbr(int nbr);
int		ft_add(int nb1, int nb2);
int		ft_sub(int nb1, int nb2);
int		ft_multiple(int nb1, int nb2);
int		ft_div(int nb1, int nb2);
int		ft_mod(int nb1, int nb2);

#endif