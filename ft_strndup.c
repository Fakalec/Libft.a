/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 11:53:46 by dstracke          #+#    #+#             */
/*   Updated: 2019/01/30 11:55:30 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char *t;

	if (!(t = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	t[n] = '\0';
	while (n--)
		t[n] = s[n];
	return (t);
}
