/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:13:12 by labbamon          #+#    #+#             */
/*   Updated: 2023/01/20 17:57:01 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(src);
	if (size == 0)
		return (j);
	k = ft_strlen(dest);
	if (k >= size)
		return (size + j);
	while (src[i] != '\0' && i < size - k)
	{
		dest[i + k] = src[i];
		i++;
	}
	if (i < size - k)
		dest[i + k] = '\0';
	else
		dest[i + k - 1] = '\0';
	return (j + k);
}
