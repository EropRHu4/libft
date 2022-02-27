/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:34:52 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 14:35:16 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;
	int	tmp[10];
	int	i;

	if (n >= 0)
		sign = 1;
	else
		sign = -1;
	if (n == 0)
		i = 1;
	else
		i = 0;
	tmp[0] = 0;
	while (n != 0)
	{
		tmp[i] = n % 10 * sign;
		n /= 10;
		i++;
	}
	if (sign == -1)
		ft_putchar_fd('-', fd);
	while (i > 0)
		ft_putchar_fd(tmp[--i] + '0', fd);
}
