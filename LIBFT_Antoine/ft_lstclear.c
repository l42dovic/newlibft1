/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:52:06 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/23 14:32:59 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmpp;

	if (!del || !lst)
		return ;
	tmp = *lst;
	tmpp = *lst;
	while (tmp)
	{
		tmpp = tmpp->next;
		del(tmp->content);
		free(tmp);
		tmp = tmpp;
	}
	*lst = NULL;
}
