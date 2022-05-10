/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:37:36 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/09 22:40:41 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' && n-- > 0)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
