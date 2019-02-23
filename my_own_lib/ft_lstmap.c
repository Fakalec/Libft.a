/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 10:16:26 by dstracke          #+#    #+#             */
/*   Updated: 2019/01/30 11:15:44 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*flist;

	if (!lst || !f)
		return (NULL);
	flist = f(lst);
	new_list = flist;
	while (lst->next)
	{
		lst = lst->next;
		if (!(flist->next = f(lst)))
		{
			free(flist->next);
			return (NULL);
		}
		flist = flist->next;
	}
	return (new_list);
}
