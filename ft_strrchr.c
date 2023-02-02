/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbamon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:13 by labbamon          #+#    #+#             */
/*   Updated: 2023/01/13 21:22:38 by labbamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*loc;

	loc = 0;
	while (*s != '\0')
	{	
		if ((unsigned char)*s == (unsigned char)c)
			loc = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (loc);
}
