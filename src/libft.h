/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:26:12 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/10 00:12:33 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);

int		ft_isdigit(int a);

int		ft_isalnum(int a);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

int		ft_atoi(const char *str);

char	*ft_strdup(char *s1);

int		ft_toupper(int c);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

char	*ft_strchr(const char *s, int c);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_strrchr(const char *s, int c);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_tolower(int c);

#endif
