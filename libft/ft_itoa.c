/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:15:53 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 16:16:39 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_ternari(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

static	int	ft_ifminus(int n)
{
	if (n < 0)
		return (3);
	return (2);
}

char	*ft_itoa(int n)
{
	int		nb;
	int		i;
	char	*num;

	i = 2;
	i = ft_ifminus(n);
	nb = n;
	while (!(nb < 10 && nb > -10))
	{
		i++;
		nb = nb / 10;
	}
	num = (char *)malloc(sizeof(char) * i);
	if (!num)
		return (NULL);
	num[--i] = '\0';
	nb = ft_ternari(n);
	while (n || i)
	{
		num[--i] = n % 10 * nb + '0';
		n = n / 10;
	}
	if (nb < 0)
		num[0] = '-';
	return (num);
}
