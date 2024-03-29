/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_edges.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:20:23 by vsergio           #+#    #+#             */
/*   Updated: 2023/04/07 17:52:31 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

char	*ft_strtrim_edges(char const *s1, char const *set)
{
	char	*str1;
	int		i_start;
	int		i_end;

	if (!s1)
		return (NULL);
	i_end = ft_strlen(s1) - 1;
	i_start = 0;
	if (s1[i_start] != '\0' && ft_strchr(set, s1[i_start]))
	{
		i_start++;
	}
	if (s1[i_end] != '\0' && ft_strrchr(set, s1[i_end]))
	{
		i_end--;
	}
	str1 = ft_substr(s1, i_start, (i_end - i_start) + 1);
	return (str1);
}
