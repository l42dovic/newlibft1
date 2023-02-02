/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:27:32 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/09 11:26:11 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	void			*vs;
	unsigned char	*cs;
	unsigned char	cc;

	i = 0;
	vs = (void *)s;
	cs = (unsigned char *)vs;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (cs[i] == cc)
			return (vs + i);
		i++;
	}
	return (NULL);
}
