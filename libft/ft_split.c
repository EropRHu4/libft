/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:37:07 by syule             #+#    #+#             */
/*   Updated: 2021/11/15 12:25:35 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_let(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static	char	*create_word(char const *str, char c, int len)
{
	int		j;
	char	*mas;

	j = 0;
	mas = (char *)malloc(sizeof(char) * len + 1);
	while (*str && *str != c)
	{
		mas[j] = *str;
		str++;
		j++;
	}
	mas[j] = '\0';
	return (mas);
}

static	int	count_word(const char *str, char c)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (*str && i < ft_strlen(str))
	{
		if ((str[i + 1] == c && str[i] != c)
			|| (str[i + 1] == '\0' && str[i] != c))
			n++;
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char		**mas;
	int			j[2];

	if (s == NULL)
		return (NULL);
	j[0] = count_word(s, c);
	j[1] = 0;
	if (j[0] > 0)
	{
		mas = (char **)malloc(sizeof(char *) * (j[0] + 1));
		if (!s || !mas)
			return (0);
		while (j[1] < j[0])
		{
			while (*s == c && *s)
				s++;
			mas[j[1]++] = create_word(s, c, count_let(s, c));
			while (*s != c && *s)
				s++;
		}
	}
	else
		mas = (char **)malloc(sizeof(char *));
	mas[j[1]] = 0;
	return (mas);
}
