/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:02:46 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/22 16:18:47 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cs;
	char	*dest;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	cs = (char *)s;
	dest = malloc((len * sizeof(char)) + 1);
	if (dest == NULL)
		return (NULL);
	if (dest != NULL)
	{
		while (i < len && cs[i] != '\0')
		{
			dest[i] = cs[i + start];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
