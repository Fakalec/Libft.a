/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:14:53 by dstracke          #+#    #+#             */
/*   Updated: 2018/12/04 15:13:54 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	int i;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (n--)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
