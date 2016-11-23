/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abykov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:07:28 by abykov            #+#    #+#             */
/*   Updated: 2016/11/21 14:07:29 by abykov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char *s;
	unsigned char		*temp;

	temp = (char *) malloc(sizeof(char) * n);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	while(i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		d[i] = temp[i];
		i++;
	}

	free(temp);
	return (dst);
}
