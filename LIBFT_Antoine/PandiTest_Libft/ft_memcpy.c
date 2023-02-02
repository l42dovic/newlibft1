/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:35:12 by aherbet           #+#    #+#             */
/*   Updated: 2022/11/21 21:57:45 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*csrc;
	unsigned char	*cdest;

	i = 0;
	if (!src && !dest)
		return (NULL);
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	int		i;
	char	str1[] = "bidouille une nouille";
	char	*str2 = malloc(20 * sizeof(*str2));
	char	*str3 = malloc(20 * sizeof(*str3));

	printf("Tested function is : %s\n", "memcpy");
	if (!str2 || !str3)
		return (0);
	i = ft_strlen(str1);
   	printf("%s : %s\n", (char *)memcpy(str2, str1, 0), (char *)ft_memcpy(str3, str1, 0));
	printf("%s : %s\n", (char *)memcpy(str2, str1, 1), (char *)ft_memcpy(str3, str1, 1));
	printf("%s : %s\n", (char *)memcpy(str2, str1, i), (char *)ft_memcpy(str3, str1, i));
	printf("%s : %s\n", (char *)memcpy(str2, str1, i +1), (char *)ft_memcpy(str3, str1, i +1));
	str1[i -1] = '\0';
	str1[i] = 'z';
	printf("%s : %s\n", (char *)memcpy(str2, str1, i +1), (char *)ft_memcpy(str3, str1, i +1));
	free(str2);
	free(str3);
	
	return (0);
}