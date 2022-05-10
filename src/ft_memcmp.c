/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 22:16:18 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/09 23:35:19 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	while (n-- > 0)
	{
		if (*s1++ != *s2++)
			return (s1[-1] - s2[-1]);
	}
	return (0);
}
