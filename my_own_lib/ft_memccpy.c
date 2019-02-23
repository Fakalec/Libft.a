/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:15:16 by dstracke          #+#    #+#             */
/*   Updated: 2019/01/23 12:38:36 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		if (((((unsigned char *)dst)[i] = \
						((unsigned char *)src)[i])) == (unsigned char)c)
			return (&dst[i + 1]);
	return (NULL);
}
