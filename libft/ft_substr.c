/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:20:01 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 15:20:03 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			act_len;
	size_t			src_len;
	unsigned int	i;

	if (!s)
		return (0);
	src_len = ft_strlen(s);
	if (src_len + 1 <= start)
		act_len = 0;
	else
	{
		if (len >= src_len + 1 - start)
			act_len = src_len + 1 - start;
		else
			act_len = len;
	}
	str = (char *)malloc(act_len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i++ < act_len)
		str[i - 1] = s[start + i - 1];
	str[i - 1] = 0;
	return (str);
}
