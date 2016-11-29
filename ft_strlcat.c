/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abykov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:03:56 by abykov            #+#    #+#             */
/*   Updated: 2016/11/22 17:03:56 by abykov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen;
	size_t srclen;
	size_t i;
	size_t j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = dstlen;
	j = 0;
	if (dstlen + 1 < size)
	{
		while (i != size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	if (size < dstlen)
		return (size + srclen);
	return (dstlen + srclen);
}
