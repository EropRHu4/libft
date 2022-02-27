/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:49:35 by syule             #+#    #+#             */
/*   Updated: 2021/11/14 17:33:20 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int sym )
{
	while (*str != '\0')
	{
		if ((unsigned char)*str == (unsigned char)sym)
			return ((char *)str);
		str++;
	}
	if (sym == 0)
		return ((char *)str);
	return (NULL);
}
