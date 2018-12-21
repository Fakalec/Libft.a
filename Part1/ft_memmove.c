/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 18:24:26 by dstracke          #+#    #+#             */
/*   Updated: 2018/12/18 10:50:29 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *res;
	char *dest;
	size_t i;

	i = -1;
	res = (char *)src;
	dest = (char *)dst;
	if (res < dest)
		while (++i < len)
			dest[len - i] = res[len - i];
	else
		while (--len)
			*(dest++) = *(res++);
	return (dst);
}
/*
int main(int argc, char *argv[])
{
	char a[11] = "poleuretan";

	printf("%s", ft_memmove(&a[4], &a[3], 3));
	return 0;
}
*/
