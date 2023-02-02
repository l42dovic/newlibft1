/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:49:03 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/23 14:34:32 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*last;

	if (!lst && !new)
		return ;
	if (*lst != NULL)
	{
		last = *lst;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	else
		*lst = new;
}
