/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:20:50 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/29 16:48:30 by aherbet          ###   ########.fr       */
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
	while (src[i] != '\0' && (i < size - k))
	{
		dest[i + k] = src[i];
		i++;
	}
	if (i < size - k)
		dest[i + k] = '\0';
	else
		dest[i + k -1] = '\0';
	return (j + k);
}
