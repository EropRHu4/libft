/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:28:16 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 14:28:52 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*buf, int c, size_t bytes)
{
	size_t			i;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	while (i < bytes)
	{
		((char *)buf)[i] = ch;
		i++;
	}
	return (buf);
}
