/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_quotes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:35:39 by vsergio           #+#    #+#             */
/*   Updated: 2022/07/19 23:25:32 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_splits(char *s, char c);
static int sub_len(char *s, char c);
static void ft_free(char **final, int offset);

char **ft_split_quotes(char const *s, char c)
{
	char **final;
	int splits;
	int offset;
	int substring;

	offset = 0;
	splits = count_splits((char *)s, c);
	final = malloc(sizeof(char *) * (splits + 1));
	if (final == NULL)
		return (NULL);
	final[splits] = NULL;
	while (offset < splits)
	{
		while (*(char *)s != '\0' && *(char *)s == c)
			s++;
		substring = sub_len((char *)s, c);
		final[offset] = ft_substr(s, 0, substring);
		if (!final[offset++])
		{
			ft_free(final, offset);
			return (NULL);
		}
		s += substring;
	}
	return (final);
}

static void ft_free(char **final, int offset)
{
	while (offset-- > 0)
		free(final[offset]);
	free(final);
}

static int count_splits(char *str, char c)
{
	int sublen;
	int splitnum;

	splitnum = 0;
	while (*str != '\0')
	{
		while (*str && *str == c)
			str++;
		sublen = sub_len(str, c);
		str += sublen;
		if (sublen)
			splitnum++;
	}
	return (splitnum);
}
#include <stdio.h>
static int sub_len(char *str, char c)
{
	int len;

	len = 0;
	while (*str != '\0' && *str != c)
	{
		if (*str == 39)
		{
			str++;
			len++;
			while (*str != 39)
			{
				len++;
				str++;
			}
		}
		if (*str == '"')
		{
			str++;
			len++;
			while (*str != '"')
			{
				len++;
				str++;
			}
		}
		str++;
		len++;
	}
	return (len);
}
