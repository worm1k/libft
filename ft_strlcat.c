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
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(dst);
	while (dst[i] && i < size)
		i++;

	while (src[j] && j < size - len - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (j == size - len - 1 && src[j] != '\0')
		return (size);
	else
	{
		dst[i] = '\0';
		return (len + ft_strlen(src));
	}
}
