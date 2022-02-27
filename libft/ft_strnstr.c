/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:02:01 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 18:48:24 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *lit, size_t len)
{
	unsigned int		i;
	unsigned int		j;

	if (lit[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == lit[j])
		{
			while (i + j < len && big[i + j] == lit[j])
			{
				j++;
				if (!lit[j])
					return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (0);
}
