/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 15:33:59 by dstracke          #+#    #+#             */
/*   Updated: 2018/12/19 16:09:02 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
/*
{
	size_t i;
	const char *s;

	s = haystack;
	i = strlen(needle);
	while (*haystack)
	{
		if (*haystack == *needle)
			while (*haystack++ == *needle++)
				i--;
		haystack++;
	}
	if (i == 1)
		return (NULL);
	else
		return (NULL);
}
*/
{
	const char *hay;
	const char *ned;

	hay = haystack;
	ned = needle;
	while (1)
	{
		if (!*ned)
			return ((char*)haystack);
		if (*ned == *hay)
		{
			ned++;
			hay++;
		}
		else
		{
			ned = needle;
			if (!*hay)
				return (NULL);
			haystack = hay++;
		}
	}
}
/*
int		main()
{
	char a[10] = "123456789";
	char b[3] = "12";

	printf("%s", ft_strstr(a, b));
	return (0);
}
*/
