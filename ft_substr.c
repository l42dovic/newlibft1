/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:02:46 by aherbet           #+#    #+#             */
/*   Updated: 2023/01/15 19:07:05 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ps;
	char	*dest;
	size_t	length;

	length = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > length)
		return (ft_strdup(""));
	if (len > length - start)
		len = length - start;
	i = 0;
	ps = (char *)s;
	dest = malloc((len * sizeof(char)) + 1);
	if (!dest)
		return (NULL);
	while (i < len && ps[i] != '\0')
	{
		dest[i] = ps[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
