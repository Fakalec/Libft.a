/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 12:35:20 by dstracke          #+#    #+#             */
/*   Updated: 2018/12/18 15:07:09 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

  char *ft_strncpy(char *dst, const char *src, size_t len)
{
	char *s;

	s = dst;
	while (len)
	{
		if ((*s = *src) != 0)
			src++;
		s++;
		len--;
	}
	return (dst);
}
