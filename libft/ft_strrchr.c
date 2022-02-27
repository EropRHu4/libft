/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:13:20 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 19:26:16 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int ch)
{
	char	*str_end;

	str_end = (char *)str + ft_strlen(str);
	while (str_end > str && *str_end != (char)ch)
		str_end--;
	if (*str_end == (char)ch)
		return (str_end);
	return (NULL);
}
