/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:01:51 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 15:01:53 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (0);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	while (*s)
	{
		str[i] = f(i, *s);
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
