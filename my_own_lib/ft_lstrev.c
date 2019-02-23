/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrrev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:27:29 by dstracke          #+#    #+#             */
/*   Updated: 2019/01/30 17:01:45 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstrev(t_list *lst)
{
	t_list	*prev;
	t_list	*next;
	t_list	*mid;

	prev = NULL;
	mid = lst;
	while (mid)
	{
		next = mid->next;
		mid->next = prev;
		prev = mid;
		mid = next;
	}
	lst = prev;
	return (lst);
}
