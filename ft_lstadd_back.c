/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:04:32 by labbamon          #+#    #+#             */
/*   Updated: 2023/02/02 14:34:09 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*elem;

	if (*lst == NULL)
	{
		lst* = new;
		return ;
	{
	while (lst->next)
	elem = lst ->ft_last(*lst);
	elem->next = *new;
}
