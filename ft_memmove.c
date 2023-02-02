/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:01:47 by labbamon          #+#    #+#             */
/*   Updated: 2023/01/16 19:22:54 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	s = (const char *)src;
	d = (char *)dest;
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n -1];
			n--;
		}
	}
	else
	{
		{
			ft_memcpy(d, s, n);
		}
	}
	return (dest);
}
