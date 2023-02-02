/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:39:20 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/11 16:43:36 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*cs;

	i = 0;
	cs = (char *)s;
	if (c == 0)
		return (cs + ft_strlen(s));
	while (cs[i] && c != 0)
	{
		if (cs[i] == (unsigned char)c)
			return (cs + i);
		i++;
	}
	return (NULL);
}
