/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:39:04 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/08 18:13:35 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i] && c != 0)
	{
		if (s[i] == (unsigned char)c)
		{
			j = i;
			count++;
		}
		i++;
	}
	if (count != 0)
		return ((char *)s + j);
	else
		return (NULL);
}
