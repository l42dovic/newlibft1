/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:18:34 by aherbet           #+#    #+#             */
/*   Updated: 2022/12/01 20:12:12 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*strt;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	strt = ft_lstnew((*f)(lst->content));
	new = strt;
	lst = lst->next;
	if (!strt)
		return (NULL);
	while (lst != NULL)
	{
		new->next = ft_lstnew((*f)(lst->content));
		if (!new->next)
		{
			ft_lstclear(&strt, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (strt);
}