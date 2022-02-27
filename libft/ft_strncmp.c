/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:03:37 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 19:17:20 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *str1, char const *str2, int n )
{
	if (n == 0)
		return (0);
	while (*str1 && *str2 && *str1 == *str2 && n - 1)
	{
		n--;
		++str1;
		++str2;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
	return (0);
}
