/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 23:01:31 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/09 23:49:26 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			srclen;
	size_t			dstlen;
	unsigned int	index;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	index = 0;
	if (dstlen == dstsize)
		return (dstsize + srclen);
	if (srclen < (dstsize - dstlen))
		dst[dstlen + index] = src[index];
	dst[dstlen + index] = '\0';
	return (dstlen + srclen);
}
