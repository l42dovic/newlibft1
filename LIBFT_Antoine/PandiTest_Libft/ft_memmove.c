/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:06:30 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/21 21:59:39 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	if (!src && !dest)
		return (NULL);
	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if (src < dest)
	{
		while (n-- > 0)
			cdest[n] = csrc[n];
	}
	else
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dest);
}

int main(void)
{
	char	str1[] = "bidouille une nouille";
	char	str2[] = "bidouille une nouille";

	printf("Tested function is : %s\n", "memmove");
   	printf("%s : %s\n", (char *)memmove(str1 +3, str1, 0), (char *)ft_memmove(str2 +3, str2, 0));
	printf("%s : %s\n", (char *)memmove(str1 +3, str1, 8), (char *)ft_memmove(str2 +3, str2, 8));
	printf("%s : %s\n", (char *)memmove(str1, str1 +3, 0), (char *)ft_memmove(str2, str2 +3, 0));
	printf("%s : %s\n", (char *)memmove(str1, str1 +3, 8), (char *)ft_memmove(str2, str2 +3, 8));
	str1[3] = '\0';
	str2[3] = '\0';
	printf("%s : %s\n", (char *)memmove(str1, str1, 5), (char *)ft_memmove(str2, str2, 5));
	printf("%s : %s\n", (char *)memmove(str1 +4, str1, 8), (char *)ft_memmove(str2 +4, str2, 8));

	return (0);
}