/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:40:26 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/22 16:07:58 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cbig;
	size_t	ltl_len;

	if (!big && len == 0)
		return (NULL);
	cbig = (char *)big;
	ltl_len = ft_strlen(little);
	if (ltl_len == 0)
		return (cbig);
	i = 0;
	while (cbig[i] && ltl_len <= len)
	{
		j = 0;
		while (cbig[i + j] == little[j] && cbig[i + j] != 0 && little[j] != 0)
			j++;
		if (little[j] == '\0')
			return (&cbig[i]);
		i++;
		len--;
	}
	return (NULL);
}
