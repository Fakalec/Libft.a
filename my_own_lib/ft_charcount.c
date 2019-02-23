/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 17:43:58 by dstracke          #+#    #+#             */
/*   Updated: 2019/02/09 17:45:24 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_charcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!s || !c)
		return (count);
	while (*s != c && *s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
