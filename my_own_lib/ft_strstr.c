/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 15:33:59 by dstracke          #+#    #+#             */
/*   Updated: 2019/01/23 19:57:30 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*ned;

	i = 0;
	ned = (char *)needle;
	hay = (char *)haystack;
	if (!ned[i])
		return (&hay[i]);
	while (hay[i])
	{
		j = 0;
		while (ned[j] && hay[i + j] == ned[j])
			j++;
		if (!ned[j])
			return (&hay[i]);
		i++;
	}
	return (NULL);
}
