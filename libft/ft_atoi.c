/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:43:58 by syule             #+#    #+#             */
/*   Updated: 2021/11/14 16:14:31 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *s)
{	
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 0;
	number = 0;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n')
		|| (s[i] == '\v') || (s[i] == '\f') || (s[i] == '\r'))
		i++;
	if (s[i] == '-')
		negativ = 1;
	if ((s[i] == '-') || (s[i] == '+'))
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		number *= 10;
		number += ((int)s[i] - '0');
		i++;
	}
	if (negativ == 1)
		return (-number);
	else
		return (number);
}
