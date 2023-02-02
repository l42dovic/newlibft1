/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:26:15 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/10 14:53:10 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cs;
	size_t	size_m;
	char	*copy;
	size_t	i;

	cs = (char *)s;
	size_m = ft_strlen(s);
	copy = (char *)malloc(((size_m +1) * sizeof(char)));
	if (copy == NULL)
		return (NULL);
	if (copy != NULL)
	{
		i = 0;
		while (cs[i])
		{
			copy[i] = cs[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}
