/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:23:50 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 14:24:16 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	void	*dst;

	dst = dest;
	if (!dest && !src)
		return (NULL);
	while (len--)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
	}
	return (dst);
}
