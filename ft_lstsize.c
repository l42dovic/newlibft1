/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:25:28 by labbamon          #+#    #+#             */
/*   Updated: 2023/01/25 18:19:04 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)	
	{
		lst = lst->next;
		i++;
	}
	return (i);

}
			

