/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syule <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:11:00 by syule             #+#    #+#             */
/*   Updated: 2021/11/13 20:17:35 by syule            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int			ft_atoi(char const *s);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t num, size_t size);
int			ft_isalnum(int ch);
int			ft_isalpha(int ch);
int			ft_isascii(int ch);
int			ft_isdigit(int ch);
int			ft_isprint(int ch);
char		*ft_itoa(int n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t len);
void		*ft_memmove(void *dest, const void *src, size_t len);
void		*ft_memset(void *buf, int c, size_t bytes);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
char		**ft_split(char const *s, char c);
char		*ft_strchr(char const *str, int sym );
char		*ft_strdup(const char *src);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
int			ft_strlen(char const *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(char const *str1, char const *str2, int n );
char		*ft_strnstr(char const *big, char const *lit, size_t len);
char		*ft_strrchr(char const *str, int ch);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int ch);
int			ft_toupper(int ch);

#endif
