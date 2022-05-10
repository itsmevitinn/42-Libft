/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:43:04 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/09 22:49:13 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		sz_temp;

	sz_temp = ft_strlen((char *)s);
	while (sz_temp >= 0)
	{
		if (s[sz_temp] == c)
			return ((char *)&s[sz_temp]);
		sz_temp--;
	}
	return (0);
}
