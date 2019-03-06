/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 12:28:46 by dstracke          #+#    #+#             */
/*   Updated: 2019/03/05 15:38:36 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_freewd(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		str[i++] = NULL;
	}
	free(str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**kek;
	int		word;

	word = 0;
	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(kek = (char **)malloc(sizeof(char*) * (ft_word_counter(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			if (!(kek[word++] = ft_strndup(s + j, i - j)))
				ft_freewd(kek);
	}
	kek[word] = 0;
	return (kek);
}
