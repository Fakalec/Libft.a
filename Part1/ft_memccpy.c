/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:15:16 by dstracke          #+#    #+#             */
/*   Updated: 2018/12/18 08:57:07 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	size_t i;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	i = -1;
	while (++i < n)
		if (((b[i] = a[i])) == (unsigned char) c)
			return (&dst[i + 1]);
	return (NULL);
}
